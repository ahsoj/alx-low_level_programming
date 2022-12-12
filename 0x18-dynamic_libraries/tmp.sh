#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o 100-operations.so *.o

