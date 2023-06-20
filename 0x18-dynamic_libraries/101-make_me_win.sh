#!/bin/bash
gcc -shared -o evil.so -fPIC evil.c
export LD_PRELOAD=./evil.so
