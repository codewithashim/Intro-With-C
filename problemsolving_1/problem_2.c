#include <stdio.h>

int main()
{

    int num_1, num_2;

    scanf("%d %d", &num_1, &num_2);

    // printf("%d %d", num_1, num_2);

    // ==== calculation

    int sum = num_1 + num_2;
    int multi = num_1 * num_2;
    float minus = num_1 - num_2;
    float dev = num_1 * 1.0 / num_2;
    float mod = num_1 % num_2;

    printf("%d+%d=%d\n", num_1, num_2, sum);
    printf("%d-%d=%0.3f\n", num_1, num_2, minus);
    printf("%d*%d=%d\n", num_1, num_2, multi);
    printf("%d/%d=%0.3f\n", num_1, num_2, dev);
    printf("%d%%%d=%0.3f\n", num_1, num_2, dev);

    return 0;
}

/**
 * You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.
For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50
*/

