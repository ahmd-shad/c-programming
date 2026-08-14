#include <stdio.h>
int main( ){
int n,i;
long long factorial=1;
printf("enter a positive intiger:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
factorial=factorial*i;}
printf("factorial of %d=%11d",n,factorial);
return 0;}
