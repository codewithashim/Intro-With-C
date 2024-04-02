#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("You can eat fuchka");
    }
    else if (tk >= 50)
    {
        printf("You can eat burger");
    }
    else
    {
        printf("You cant eat anything");
    }
}
