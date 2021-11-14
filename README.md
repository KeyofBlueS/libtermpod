# libpodfmt
POD game archive format library written in C for all existing versions

# Dependencies
- [libzip] (http://github.com/nih-at/libzip/)

# Building

```c
cmake .
make
make install
```

# Status

checksum crc-ccitt32 works?
format|data|entry|
---|---|---
EPD|no|no
POD2|yes|yes
POD3|no|yes
POD4|no|yes
POD5|no|yes
POD6|no|yes

