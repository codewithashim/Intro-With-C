#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    if (sum < 0)
    {
        long long int make_posetive = sum * -1;
        printf("%lld", make_posetive);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}