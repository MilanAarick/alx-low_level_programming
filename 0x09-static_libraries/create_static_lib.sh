#!/bin/bash
gcc -Wall -Wextra -Werrir -pendantic -c *.c
ar rc liball,a *.o
