#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    int lenS = strlen(s);
    int lenT = strlen(t);

    printf("%d %d\n", lenS, lenT);

    printf("%s %s\n", s, t);


    return 0;
}