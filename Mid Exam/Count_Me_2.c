#include <stdio.h>
#include <string.h>

int main()
{

    char s[100000];
    scanf("%s", &s);

    int countConsnents = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            countConsnents++;
        }
    }

    printf("%d", countConsnents);

    return 0;
}