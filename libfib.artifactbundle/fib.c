#include <stdio.h>

int fib(int n)
{
    return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

void runfib(int n)
{
    printf("fib(%d) = %d\n", n, fib(n));
}
