#include <stdio.h>

int main()
{
    int i;
    i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // do while
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}

#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 3) {
        i++;
    }
   printf("%d",i);
   return 0;
}


#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        a++;
        continue;
    }
    printf("%d %d",i,a);
    return 0;
}


#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        continue;
        a++;
    }
    printf("%d %d",i,a);
    return 0;
}
