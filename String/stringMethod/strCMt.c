#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);

    printf("%d", val);

    if (val < 0)
    {
        printf("A is small\n");
    }
    else if (val > 0)
    {
        printf("B is small\n");
    }
    else
    {
        printf("All are same \n");
    }

    return 0;
}