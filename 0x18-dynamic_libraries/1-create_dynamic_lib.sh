!/bin/bash
gcc -fPIC -wall -werror -wextra -pedantic -c *.c
gcc *.o -shared -o libell.so
