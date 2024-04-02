#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 6000)
    {
        printf("You can go sent coxosbazar\n");
        if (tk >= 10000)
        {
            printf("You can go sentmartine\n");
        }
        else
        {
            printf("You come back\n");
        }
    }
    else
    {
        printf("No need to go any whire\n");
    }
}