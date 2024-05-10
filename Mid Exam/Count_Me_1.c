#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int countTow = 0, countThree = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            countTow++;
        }
        else if (arr[i] % 2 == 0)
        {
            countTow++;
        }
        else if (arr[i] % 3 == 0)
        {
            countThree++;
        }
    }

    printf("%d %d", countTow, countThree);

    return 0;
}