
#include<stdio.h>
int main()
{
    long long fib[55];
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 55; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    int n;
    while (scanf("%d", &n))
    {
        if (n == 0) break;
        printf("%lld\n", fib[n - 1]);
    }
    return 0;
}
