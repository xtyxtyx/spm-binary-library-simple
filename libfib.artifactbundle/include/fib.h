

#ifdef _MSC_VER
#define API __cdecl
#else
#define API
#endif

int API fib(int n);

void API runfib(int n);
