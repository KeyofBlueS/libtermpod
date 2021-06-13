# libpodfmt
POD game archive format library written in C for all existing versions

# Dependencies
- libzip http://github.com/nih-at/libzip/
- libcrc http://github.com/jopadan/libcrc/

# Building

```c
cmake .
make
make install
```

# Status

checksum crc-ccitt32 works?

data entry: file/single
EPD       : no/no
POD2      : yes/yes
POD3      : no/yes   file checksum changes missing offset
POD4      : no/yes
POD5      : no/yes
POD6      : no/yes

