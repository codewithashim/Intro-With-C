#include <stdio.h>

int main()
{
    char a[] = "Ashim\0";

    int sz = sizeof(a) / sizeof(char);

    printf("%d", sz);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", a[i]);
    // }

    printf("%s", a);

    return 0;
}