#!/bin/bash
wget https://github.com/August-IE/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so -P /tmp/
export LD_PRELOAD=/tmp/libdynamic.so
