#include <stdio.h>

int main()
{
    char c;
    int cunt[26] = {0};

    while (scanf("%c", &c) != EOF)
    {
        cunt[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cunt[i - 'a'] > 0)
        {
            printf("%c - %d\n", i, cunt[i - 'a']);
        }
    }

    return 0;
}