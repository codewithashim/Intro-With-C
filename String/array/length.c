#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", &arr);
    int st = strlen(arr);
    // int count = 0;
    // int i = 0;

    // while (arr[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // for (int i = 0; arr[i] != '\0'; i++)
    // {
    //     count++;
    // }
    printf("%d\n", st);
    return 0;
}