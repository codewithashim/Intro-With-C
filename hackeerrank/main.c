// #include <stdio.h>

// int main()
// {
//     int i, n;
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         int dev = i / 5;

//         if (dev == 0)
//         {
//             printf("%d Yes\n", i);
//         }
//         else
//         {
//             printf("%d No\n", i);
//         }
//     }

//     return 0;
// }


#include <stdio.h>
 

int main() 
{
    char ch, s[100], sen[100];

    scanf("%c %s %[^\n]%*c", &ch, &s, &sen);

    printf("%c\n%s\n%s\n", ch, s, sen);

    return 0;
}