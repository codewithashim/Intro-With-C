#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    long long int sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%lld", sum);

    return 0;
}

/**
 * ✅ n(n+1)/2
*/