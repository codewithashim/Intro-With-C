#include <stdio.h>

int main()
{
    int numOfTestCase;

    scanf("%d", &numOfTestCase);

    while (numOfTestCase--)
    {
        int n, numX;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &numX);

        int abvailableValue = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == numX)
            {
                abvailableValue = 1;
                break;
            }
        }

        if (abvailableValue)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}