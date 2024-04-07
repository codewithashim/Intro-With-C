// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a >= b)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a % b == 0)
//     {
//         printf("Multiples\n");
//     }
//     else if (b % a == 0)
//     {
//         printf("Multiples\n");
//     } else{
//           printf("No Multiples\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     char a;
//     scanf("%c", &a);

//     if (a >= 'a' && a <= 'z')
//     {
//         int ans = a - 32;
//         printf("%c\n", ans);
//     }
//     else if (a >= 'A' && a <= 'Z')
//     {
//         int ans = a + 32;
//         printf("%c\n", ans);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, firstDigit;
//     scanf("%d", &n);

//     while (n >= 10)
//     {
//         n = n / 10;
//     }

//     firstDigit = n;

//     if (n % 2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char x;
//     scanf("%c", &x);

//     if (x >= '0' && x <= '9')
//     {
//         printf("IS DIGIT\n");
//     }
//     else
//     {
//         printf("ALPHA\n");

//         if (x >= 'a' && x <= 'z')
//         {
//             printf("IS SMALL\n");
//         }
//         else
//         {
//             printf("IS CAPITAL\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }

    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    return 0;
}