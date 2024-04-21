#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", i + 1);
        }
    }
    else
    {
        for (int i = n; i <=0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}