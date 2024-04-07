#include <stdio.h>

int main()
{
    int i ;
    for (i = 0; i <= 1000; i++)
    {
        printf("%d\n", i);
    }

    for ( i = 1; i <= 20; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}

/**
 * ✅ print the value form 0 - 1000
*/