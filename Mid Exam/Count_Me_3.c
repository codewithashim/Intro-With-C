#include <stdio.h>
#include <string.h>

int main()
{
    int numOfTestCase;

    scanf("%d", &numOfTestCase);

    while (numOfTestCase--)
    {
        char arrS[10000];
        scanf("%s", arrS);
        
        int countCapitalAlphabets = 0, countSmallAlphabets = 0, countNumber = 0;

        for (int i = 0; arrS[i] != '\0'; i++)
        {

            if (arrS[i] >= 'a' && arrS[i] <= 'z')
            {
                countSmallAlphabets++;
            }

            else if (arrS[i] >= 'A' && arrS[i] <= 'Z')
            {
                countCapitalAlphabets++;
            }
            else if (arrS[i] >= '0' && arrS[i] <= '9')
            {
                countNumber++;
            }
        }

        printf("%d %d %d\n", countCapitalAlphabets, countSmallAlphabets, countNumber);
    }

        return 0;
}