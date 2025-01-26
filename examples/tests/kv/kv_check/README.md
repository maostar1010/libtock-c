KV Check
=========

This is a simple application to check for the presence of Key-Value support or
not.

If KV support exists, you should see:

```
[KV] Check for Key-Value Support
Key-Value support is enabled.
```

and if you have the process console enabled:

```
$ tockloader listen
tock$ process kv_check
𝐀𝐩𝐩: kv_check   -   [Terminated]
 Events Queued: 0   Syscall Count: 17   Dropped Upcall Count: 0
 Restart Count: 0
 Last Syscall: Exit { which: 0, completion_code: 0 }
 Completion Code: 0
 Credential: None


 ╔═══════════╤══════════════════════════════════════════╗
 ║  Address  │ Region Name    Used | Allocated (bytes)  ║
 ╚0x2000B000═╪══════════════════════════════════════════╝
             │ Grant Ptrs      128
             │ Upcalls         320
             │ Process         920
  0x2000AAA8 ┼───────────────────────────────────────────
             │ ▼ Grant          76
  0x2000AA5C ┼───────────────────────────────────────────
             │ Unused
  0x20009FC8 ┼───────────────────────────────────────────
             │ ▲ Heap         1100 |   3808               S
  0x20009B7C ┼─────────────────────────────────────────── R
             │ Data            892 |    892               A
  0x20009800 ┼─────────────────────────────────────────── M
             │ ▼ Stack         240 |   2048
  0x20009710 ┼───────────────────────────────────────────
             │ Unused
  0x20009000 ┴───────────────────────────────────────────
             .....
  0x00042000 ┬─────────────────────────────────────────── F
             │ App Flash      8116                        L
  0x0004004C ┼─────────────────────────────────────────── A
             │ Protected        76                        S
  0x00040000 ┴─────────────────────────────────────────── H
```

note that `Completion Code` is zero, meaning KV support exists. If not, the
completion code will be -1.
