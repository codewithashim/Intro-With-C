#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000001];

    scanf("%s", arr);

    int sum = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        sum = sum + (arr[i] - '0');
    }

    printf("%d", sum);

    return 0;
}