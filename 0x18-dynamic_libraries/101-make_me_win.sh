#!/bin/bash
curl -s -o ~/libdynamic.so https://raw.githubusercontent.com/August-IE/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=~/libdynamic.so
