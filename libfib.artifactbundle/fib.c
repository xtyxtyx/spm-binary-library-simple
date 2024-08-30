#include <stdio.h>

#ifdef _MSC_VER
#define API __cdecl
#else
#define API
#endif

int API fib(int n)
{
    return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

void API runfib(int n)
{
    printf("fib(%d) = %d\n", n, fib(n));
}
