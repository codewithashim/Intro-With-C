#include <stdio.h>

int main()
{
    // printf("Hey\nIm a Software Engineer");
    // printf("Hey\t Im a Software Engineer");
    // printf("\\ %%");

    // ==== variable 
    int count_num = 100, count_num2 = 2000;
    // printf("%d %d", count_num, count_num2);
    float total_amount = 23.443;
    // printf("%0.1f", total_amount);
    char my_name = 'H';
    // printf("%c" ,my_name);

    // ============ taking input and output

    int num1 , num2;
    char p;

    // scanf("d%c% d%c%" , &num1,&p, &num2,&p);
    scanf("%d%% %d%%" , &num1, &num2);

    printf("%d%% , %d%%", num1, num2);
     
    return 0;
}
