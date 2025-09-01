#include <stdio.h>

int main()
{
    int eng, hin, maths, sci, ssc;
    printf("English: ");
    scanf("%d", &eng);
    printf("Hindi: ");
    scanf("%d", &hin);
    printf("Mathematics: ");
    scanf("%d", &maths);
    printf("Science: ");
    scanf("%d", &sci);
    printf("SSc: ");
    scanf("%d", &ssc);
    int tmarks = eng + hin + maths + sci + ssc;
    printf("Total marks: %d\n", tmarks);
    float per = tmarks / 5.0;
    printf("Percentage: %.2f\n", per);
    if (per >= 90)
    {
        printf("A+\n");
    }
    else if (per >= 80)
    {
        printf("A\n");
    }
    else if (per >= 70)
    {
        printf("B\n");
    }
    else if (per >= 60)
    {
        printf("C\n");
    }
    else if (per >= 50)
    {
        printf("D\n");
    }
    else if (per >= 40)
    {
        printf("E\n");
    }
    else
    {
        printf("Fail\n");
    }
     
     
     
    


    return 0;
}
