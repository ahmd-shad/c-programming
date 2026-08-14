# include <stdio.h>
int main(){
int N,i=1,evan=2,sum=0;
printf("enter a positive integer:");
scanf("%d",&N);
while(i<=N)
{sum=sum+evan;
evan=evan+2;
i++;}
printf("sum of first %d evan number=%d",N,sum);
return 0;}
