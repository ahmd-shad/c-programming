# include <stdio.h>

int findsquare(int n)
{
    return n * n;
}

int main()
{
    int num, square;
    printf("enter a number:");
    scanf("%d", &num);

    square= findsquare(num);

    printf("square = %d", square);

    return 0;
}
