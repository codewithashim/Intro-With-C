#include <stdio.h>

int main()
{

    char arr[100001];
    fgets(arr, 100001, stdin);

    for (int i = 0; arr[i] != '\\'; i++)
    {
       printf("%c", arr[i]);
    }
    

    return 0;
}