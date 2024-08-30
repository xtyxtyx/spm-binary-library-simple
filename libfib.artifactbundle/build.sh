# Compile fib.c into a static library
gcc -c fib.c -o fib.o
ar rcs libfib.a fib.o