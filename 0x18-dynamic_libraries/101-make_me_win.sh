#!/bin/bash
curl -s -o ~/rand.so https://raw.githubusercontent.com/Hasbi-sabah/alx-low_level_programming/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=~/rand.so
