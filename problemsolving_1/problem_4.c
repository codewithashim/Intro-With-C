#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("positive");
    }
    else if (num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}

/**
 *
You need to take one integer value as input and tell if the value is positive or negative or zero.
*/