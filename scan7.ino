#include <Arduino.h>
#include "mbe.h"
#include "poll.h"

#define VERSION "v0.1.0"
#define UPDATE_INTERVAL_MILLIS 100

static long last_update_millis = 0;

void setup() {
  delay(1000);  
  Serial.begin(115200);
  delay(1000);
  Serial.println("starting");

  Serial.println("SCAN 7");
  Serial.print("olly@olly.xyz ");
  Serial.println(VERSION);
  Serial.println(__DATE__);

  if (mbe_init() != MBE_OK) {
    Serial.println("CAN BUS FAIL");
    while(1) {
      delay(1000);
    }
    return;
  }

  char ver[32];
  mbe_error err = mbe_version(ver, 32);
  if (err != MBE_OK) {
    Serial.print("MBE version fail");
    Serial.println(mbe_error_text(err));
     while(1) { //you're fucked
       delay(1000);
    }
    return;
  }

  Serial.print("ECU ");
  Serial.println(ver);
  delay(3000);
}

void loop() {
  update();
}

void update() {
  
  long t = millis();
  if (t - last_update_millis < UPDATE_INTERVAL_MILLIS) {
    return;
  }
  last_update_millis = t;

  status_t status;
  mbe_error err = poll_ecu(&status);
  if (err != MBE_OK) {
    Serial.println("Poll failed");
    Serial.println("");
    Serial.println(mbe_error_text(err));
    delay(1000);  
    return;// puase a second and then restart loop
  }

  Serial.println("\n--- ENGINE STATUS ---");
  
  // Main data
  Serial.print("RPM: ");
  Serial.println(status.engine_rpm);
  Serial.print("BAT: ");
  Serial.print(status.battery_volts);
  Serial.println("v");
  Serial.print("WATER: ");
  Serial.print(status.coolant_temp_c);
  Serial.println("c");
  Serial.print("INTAKE: ");
  Serial.print(status.air_temp_c);
  Serial.println("c");
  Serial.print("T.IDLE: ");
  Serial.println(status.target_idle_rpm);
  Serial.print("BARO: ");
  Serial.print(status.baro_pressure_bar);
  Serial.println("b");
  Serial.print("TPS: ");
  Serial.print(status.throttle_site);
  Serial.print(" ");
  Serial.print(status.throttle_angle_volts);
  Serial.println("v");

  // Lambda data
  Serial.print("LAMBDA: ");
  Serial.print(status.current_lambda);
  Serial.print(" ");
  Serial.print(status.lambda_volts);
  Serial.println("v");
  Serial.print("TARGET: ");
  Serial.println(status.target_lambda);
  Serial.print("TRIM: ");
  Serial.print(status.lambda_trim_percent);
  Serial.println("%");
  Serial.print("LAMBDA STATUS: ");
  Serial.printf("%04x\n", status.lambda_status_flags);

  // Fault codes
  Serial.print("FAULTS A/B/C/D: ");
  Serial.printf("%04x %04x %04x %04x\n", 
    status.current_faults_a_flags,
    status.current_faults_b_flags,
    status.current_faults_c_flags,
    status.current_faults_d_flags);
  Serial.print("E.SYNC: ");
  Serial.printf("%02x\n", status.engine_synch_status_flags);
  Serial.print("IDLE: ");
  Serial.printf("%02x\n", status.idlespeed_status_flags);

  // Extra data
  Serial.print("RPM LIMITS - SOFT: ");
  Serial.print(status.soft_cut_rpm);
  Serial.print(" HARD: ");
  Serial.println(status.hard_cut_rpm);
  Serial.print("WARMUP: ");
  Serial.print(status.warm_up_timer_s);
  Serial.println("s");
  
  Serial.println("-------------------");
}
