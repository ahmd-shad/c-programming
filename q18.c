#include <stdio.h>
int main(){
 int a[2][2], i, j, sum=0;
 printf("enter 4 elementof matrix:\n");
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         scanf("%d", &a[i][j]);
         sum=sum+a[i][j];
     }
 }
 printf("sumof all element=%d",sum);
 return 0;
}
