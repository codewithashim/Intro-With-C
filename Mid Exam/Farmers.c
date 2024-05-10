#include <stdio.h>

int main()
{
    int numOfTestCase;

    scanf("%d", &numOfTestCase);

    while (numOfTestCase--)
    {
        int m1, m2, d;

        scanf("%d %d %d", &m1, &m2, &d);

        int oneFarmerCanTakeTime = m1 * d;

        int withTotalFarmerCanDo = m1 + m2;

        int totalTime = oneFarmerCanTakeTime / withTotalFarmerCanDo;

        int takenTime = d - totalTime;

        printf("%d\n", takenTime);
    }

    return 0;
}