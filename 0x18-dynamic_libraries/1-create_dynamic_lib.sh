#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -shared -o liball.so
