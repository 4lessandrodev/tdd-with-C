#!/bin/sh

gcc ./*.test.c ../src/*.c && ./a.out
rm -rf ./a.out
