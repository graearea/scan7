```
20:43:21.763 -> starting
20:43:21.763 -> SCAN 7
20:43:21.763 -> olly@olly.xyz v0.1.0
20:43:21.763 -> Mar 11 2025
20:43:21.763 -> [MBE] Initializing CAN bus at 16 kbps
20:43:21.794 -> [MBE] Setting up masks and filters
20:43:21.860 -> [MBE] Init complete
20:43:21.860 -> [MBE] Flushed 3 messages
20:43:21.860 -> [MBE] Sending version request
20:43:21.860 -> [MBE] Sending message, length: 3
20:43:21.860 -> [MBE] Single frame send, ID: cbe1101
20:43:21.860 -> [MBE] Waiting for version response
20:43:21.860 -> [MBE] Starting receive
20:43:21.860 -> [MBE] Waiting for packet...
20:43:21.860 -> [MBE] Packet available
20:43:21.860 -> [MBE] Frame type: 0x10
20:43:21.860 -> [MBE] First frame received, total expected: 13
20:43:21.860 -> [MBE] Waiting for packet...
20:43:21.860 -> [MBE] Packet available
20:43:21.860 -> [MBE] Frame 1 received, total so far: 13/13
20:43:21.860 -> [MBE] Multi-frame receive complete, total: 13
20:43:21.860 -> ECU #992ab94D
20:43:24.847 -> [MBE] Sending message, length: 23
20:43:24.847 -> [MBE] Multi-frame send, total length: 23
20:43:24.847 -> [MBE] Sending frame 1, length: 7
20:43:24.847 -> [MBE] Sending frame 2, length: 7
20:43:24.847 -> [MBE] Sending frame 3, length: 3
20:43:24.847 -> [MBE] Multi-frame send complete
20:43:24.847 -> [MBE] Starting receive
20:43:24.847 -> [MBE] Waiting for packet...
20:43:24.847 -> [MBE] Packet available
20:43:24.847 -> [MBE] Frame type: 0xf0
20:43:24.879 -> [MBE] Invalid frame type: 0xf0
20:43:24.879 -> Poll failed

20:43:24.879 ->
20:43:24.879 -> MBE_RECV_BAD_HEADER
20:43:25.858 -> [MBE] Sending message, length: 23
20:43:25.891 -> [MBE] Flushed 7 messages
20:43:25.891 -> [MBE] Multi-frame send, total length: 23
20:43:25.891 -> [MBE] Sending frame 1, length: 7
20:43:25.891 -> [MBE] Sending frame 2, length: 7
20:43:25.891 -> [MBE] Sending frame 3, length: 3
20:43:25.891 -> [MBE] Multi-frame send complete
20:43:25.891 -> [MBE] Starting receive
20:43:25.891 -> [MBE] Waiting for packet...
20:43:25.891 -> [MBE] Packet available
20:43:25.891 -> [MBE] Frame type: 0x10
20:43:25.891 -> [MBE] First frame received, total expected: 18
20:43:25.891 -> [MBE] Waiting for packet...
20:43:25.891 -> [MBE] Packet available
20:43:25.891 -> [MBE] Invalid consecutive frame type: 0xf0
20:43:25.891 -> Poll failed
20:43:25.891 ->
20:43:25.891 -> MBE_RECV_BAD_HEADER
20:43:26.874 -> [MBE] Sending message, length: 23
20:43:26.874 -> [MBE] Flushed 2 messages
20:43:26.874 -> [MBE] Multi-frame send, total length: 23
20:43:26.874 -> [MBE] Sending frame 1, length: 7
20:43:26.874 -> [MBE] Sending frame 2, length: 7
20:43:26.874 -> [MBE] Sending frame 3, length: 3
20:43:26.874 -> [MBE] Multi-frame send complete
20:43:26.874 -> [MBE] Starting receive
20:43:26.906 -> [MBE] Waiting for packet...
20:43:26.906 -> [MBE] Packet available
20:43:26.906 -> [MBE] Frame type: 0xf0
20:43:26.906 -> [MBE] Invalid frame type: 0xf0
20:43:26.906 -> Poll failed
20:43:26.906 ->
20:43:26.906 -> MBE_RECV_BAD_HEADER
20:43:27.892 -> [MBE] Sending message, length: 23
20:43:27.892 -> [MBE] Flushed 3 messages
20:43:27.892 -> [MBE] Multi-frame send, total length: 23
20:43:27.892 -> [MBE] Sending frame 1, length: 7
20:43:27.892 -> [MBE] Sending frame 2, length: 7
20:43:27.892 -> [MBE] Sending frame 3, length: 3
20:43:27.892 -> [MBE] Multi-frame send complete
20:43:27.892 -> [MBE] Starting receive
20:43:27.892 -> [MBE] Waiting for packet...
20:43:27.892 -> [MBE] Packet available
20:43:27.892 -> [MBE] Frame type: 0xf0
20:43:27.892 -> [MBE] Invalid frame type: 0xf0
20:43:27.892 -> Poll failed
20:43:27.892 ->
20:43:27.892 -> MBE_RECV_BAD_HEADER
20:43:28.912 -> [MBE] Sending message, length: 23
20:43:28.912 -> [MBE] Flushed 3 messages
20:43:28.912 -> [MBE] Multi-frame send, total length: 23
20:43:28.912 -> [MBE] Sending frame 1, length: 7
20:43:28.912 -> [MBE] Sending frame 2, length: 7
20:43:28.912 -> [MBE] Sending frame 3, length: 3
20:43:28.912 -> [MBE] Multi-frame send complete
20:43:28.912 -> [MBE] Starting receive
20:43:28.912 -> [MBE] Waiting for packet...
20:43:28.912 -> [MBE] Packet available
20:43:28.912 -> [MBE] Frame type: 0xf0
20:43:28.912 -> [MBE] Invalid frame type: 0xf0
20:43:28.912 -> Poll failed
20:43:28.912 ->
```


when starting the car. it spins up, chucks a load of messages and then shuts up. if you then disable the immobiliser, it starts responding again.

```
 Poll failed
19:40:01.780 -> 
19:40:01.780 -> MBE_RECV_BAD_HEADER
	
	
19:39:50.567 -> starting
19:39:50.567 -> SCAN 7
19:39:50.567 -> olly@olly.xyz v0.1.0
19:39:50.567 -> Mar 12 2025
19:39:50.567 -> [MBE] Initializing CAN bus at 16 kbps
19:39:50.634 -> [MBE] Setting up masks and filters
19:39:50.666 -> [MBE] Init complete
19:39:50.666 -> [MBE] Sending version request
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:152 Send start
19:39:50.666 -> [MBE] Sending message, length: 3
19:39:50.666 -> [MBE] Single frame send, ID: cbe1101
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:169 SEND: 03 04 00 0d 00 00 00 00 
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:170 Send complete
19:39:50.666 -> [MBE] Waiting for version response
19:39:50.666 -> [MBE] Starting receive
19:39:50.666 -> [MBE] Waiting for packet...
19:39:50.666 -> [MBE] Packet available
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:232 RECV: 10 0d e4 00 0d 23 39 39 
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:238 RECV: 10 0d e4 00 0d 23 39 39 
19:39:50.666 -> [MBE] Frame type: 0x10
19:39:50.666 -> [MBE] First frame received, total expected: 13
19:39:50.666 -> [MBE] Waiting for packet...
19:39:50.666 -> [MBE] Packet available
19:39:50.666 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:276 RECV: 21 32 61 62 39 34 44 00 
19:39:50.666 -> [MBE] Frame 1 received, total so far: 13/13
19:39:50.666 -> [MBE] Multi-frame receive complete, total: 13
19:39:50.666 -> ECU #992ab94D
19:39:53.652 -> looop
19:39:53.652 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:152 Send start
19:39:53.652 -> [MBE] Sending message, length: 23
19:39:53.652 -> [MBE] Multi-frame send, total length: 23
19:39:53.652 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:183 SENT: 10 17 01 00 00 00 00 f8 
19:39:53.652 -> [MBE] Sending frame 1, length: 7
19:39:53.652 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:195 SENT: 21 36 37 44 45 50 51 64 
19:39:53.684 -> [MBE] Sending frame 2, length: 7
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:195 SENT: 22 6a 6b 7c 7d 92 93 9e 
19:39:53.684 -> [MBE] Sending frame 3, length: 3
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:195 SENT: 23 9f a3 a5 7d 92 93 9e 
19:39:53.684 -> [MBE] Multi-frame send complete
19:39:53.684 -> [MBE] Starting receive
19:39:53.684 -> [MBE] Waiting for packet...
19:39:53.684 -> [MBE] Packet available
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:232 RECV: 10 12 81 e9 3b cb 41 40 
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:238 RECV: 10 12 81 e9 3b cb 41 40 
19:39:53.684 -> [MBE] Frame type: 0x10
19:39:53.684 -> [MBE] First frame received, total expected: 18
19:39:53.684 -> [MBE] Waiting for packet...
19:39:53.684 -> [MBE] Packet available
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:276 RECV: 22 27 c0 99 00 cd 93 9e 
19:39:53.684 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:276 RECV: ff ff 00 00 ff ff ff ff 
19:39:53.684 -> [MBE] Invalid consecutive frame type: 0xf0
19:39:53.684 -> Poll failed
19:39:53.684 -> 
19:39:53.684 -> MBE_RECV_BAD_HEADER
```

```
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:155 Send start
21:01:14.791 -> [MBE] Sending message, length: 23
21:01:14.791 -> [MBE] Multi-frame send, total length: 23
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:186 SENT: 10 17 01 00 00 00 00 f8 
21:01:14.791 -> [MBE] Sending frame 1, length: 7
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 21 36 37 44 45 50 51 64 
21:01:14.791 -> [MBE] Sending frame 2, length: 7
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 22 6a 6b 7c 7d 92 93 9e 
21:01:14.791 -> [MBE] Sending frame 3, length: 3
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 23 9f a3 a5 7d 92 93 9e 
21:01:14.791 -> [MBE] Multi-frame send complete
21:01:14.791 -> [MBE] Starting receive
21:01:14.791 -> [MBE] Waiting for packet...
21:01:14.791 -> [MBE] Packet available
21:01:14.791 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:236 RECV: 10 12 81 6f 3c cb 41 40 
21:01:14.823 -> [MBE] Frame type: 0x10
21:01:14.823 -> [MBE] First frame received, total expected: 18
21:01:14.823 -> [MBE] Waiting for packet...
21:01:14.823 -> [MBE] Packet available
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:280 RECV: 22 2b 80 99 00 cd 93 9e 
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:280 RECV: 21 17 00 b0 4f 00 00 80 
21:01:14.823 -> [MBE] something went wrong
21:01:14.823 -> [MBE] Frame 1 received, total so far: 13/18
21:01:14.823 -> [MBE] Frame 2 received, total so far: 18/18
21:01:14.823 -> [MBE] Multi-frame receive complete, total: 18
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:155 Send start
21:01:14.823 -> [MBE] Sending message, length: 16
21:01:14.823 -> [MBE] Multi-frame send, total length: 16
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:186 SENT: 10 10 01 00 00 00 00 f9 
21:01:14.823 -> [MBE] Sending frame 1, length: 7
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 21 98 99 b2 b3 ba bb bc 
21:01:14.823 -> [MBE] Sending frame 2, length: 3
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 22 bd d6 d7 b3 ba bb bc 
21:01:14.823 -> [MBE] Multi-frame send complete
21:01:14.823 -> [MBE] Starting receive
21:01:14.823 -> [MBE] Waiting for packet...
21:01:14.823 -> [MBE] Packet available
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:236 RECV: 10 0b 81 e8 03 00 00 78 
21:01:14.823 -> [MBE] Frame type: 0x10
21:01:14.823 -> [MBE] First frame received, total expected: 11
21:01:14.823 -> [MBE] Waiting for packet...
21:01:14.823 -> [MBE] Packet available
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:280 RECV: 21 1e dc 1e 7c 01 bb bc 
21:01:14.823 -> [MBE] something went wrong
21:01:14.823 -> [MBE] Frame 1 received, total so far: 11/11
21:01:14.823 -> [MBE] Multi-frame receive complete, total: 11
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:155 Send start
21:01:14.823 -> [MBE] Sending message, length: 18
21:01:14.823 -> [MBE] Multi-frame send, total length: 18
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:186 SENT: 10 12 01 00 00 00 00 fd 
21:01:14.823 -> [MBE] Sending frame 1, length: 7
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 21 24 25 26 27 28 29 2a 
21:01:14.823 -> [MBE] Sending frame 2, length: 5
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:198 SENT: 22 2b 34 35 45 73 29 2a 
21:01:14.823 -> [MBE] Multi-frame send complete
21:01:14.823 -> [MBE] Starting receive
21:01:14.823 -> [MBE] Waiting for packet...
21:01:14.823 -> [MBE] Packet available
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:236 RECV: 10 0d 81 08 00 0f 00 00 
21:01:14.823 -> [MBE] Frame type: 0x10
21:01:14.823 -> [MBE] First frame received, total expected: 13
21:01:14.823 -> [MBE] Waiting for packet...
21:01:14.823 -> [MBE] Packet available
21:01:14.823 -> /Users/JRAE15_1/projects/scan7/mbe.cpp:280 RECV: 21 00 00 00 0e 00 01 00 
21:01:14.823 -> [MBE] something went wrong
21:01:14.823 -> [MBE] Frame 1 received, total so far: 13/13
21:01:14.823 -> [MBE] Multi-frame receive complete, total: 13
21:01:14.823 -> 21:01:14.823 -> --- ENGINE STATUS ---
21:01:14.823 -> RPM: 0
21:01:14.823 -> BAT: 11.99v
21:01:14.823 -> WATER: 11.12c
21:01:14.823 -> INTAKE: 7.77c
21:01:14.823 -> T.IDLE: 1000
21:01:14.823 -> BARO: 1.04b
21:01:14.823 -> TPS: 0.00 0.45v
21:01:14.823 -> LAMBDA: 2.05 0.85v
21:01:14.823 -> TARGET: 0.00
21:01:14.823 -> TRIM: -100.00%
21:01:14.823 -> LAMBDA STATUS: 000e
21:01:14.823 -> FAULTS A/B/C/D: 0008 000f 0000 0000
21:01:14.823 -> E.SYNC: 00
21:01:14.823 -> IDLE: 01
21:01:14.823 -> RPM LIMITS - SOFT: 7800 HARD: 7900
21:01:14.823 -> WARMUP: 39.90s
21:01:14.823 -> -------------------

21:01:14.919 -> --- ENGINE STATUS ---
21:01:14.919 -> RPM: 0
21:01:14.919 -> BAT: 11.99v
21:01:14.919 -> WATER: 11.12c
21:01:14.919 -> INTAKE: 7.77c
21:01:14.919 -> T.IDLE: 1000
21:01:14.919 -> BARO: 1.04b
21:01:14.919 -> TPS: 0.00 0.45v
21:01:14.919 -> LAMBDA: 2.05 0.84v
21:01:14.919 -> TARGET: 0.00
21:01:14.919 -> TRIM: -100.00%
21:01:14.919 -> LAMBDA STATUS: 000e
21:01:14.919 -> FAULTS A/B/C/D: 0008 000f 0000 0000
21:01:14.919 -> E.SYNC: 00
21:01:14.919 -> IDLE: 01
21:01:14.919 -> RPM LIMITS - SOFT: 7800 HARD: 7900
21:01:14.919 -> WARMUP: 39.90s
21:01:14.919 -> -------------------
```