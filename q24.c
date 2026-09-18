# include <stdio.h>

float calculateaverage(int a,int b,int c)
{
    return (a + b + c) /3.0;
}

int main()
{
    int m1,m2,m3;
    float avg;

    printf("enter 3 mark:");
    scanf("%d %d %d", &m1,&m2,&m3);

    avg = calculateaverage(m1,m2,m3);

    printf("average=%.2f,avg");

     return 0;
}
