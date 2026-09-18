
# include <stdio.h>
int add(int a, int b)
{
    return a+b;
}

int main()
{
    int n1,n2,sum;
    printf("enter 2 number:");
    scanf("%d %d", &n1,&n2);
    sum = add(n1, n2);

    printf("sum=%d",sum);

    return 0;
}
