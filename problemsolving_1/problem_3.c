#include <stdio.h>

int main()
{
    int num_1;
    scanf("%d", &num_1);

    int getEvenOddNum = num_1 % 2;

    if (getEvenOddNum == 0)
    {
        printf("event");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}

/*
You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.

*/