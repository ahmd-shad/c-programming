# include <stdio.h>

int findlarge(int a,int b )
             {
                 if(a > b)
                return a;
                  else
                    return b;
             }
int main()
{
    int n1, n2, largest;

    printf("enter 2 number:");
    scanf("%d %d", &n1, &n2);

    largest = findlarge(n1,n2);

    printf("largest number = %d", largest);

    return 0;
}
