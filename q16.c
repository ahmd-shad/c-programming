#include <stdio.h>
int main() {
int i;
for(i=1;i<=20;i++){
if(i%2==0){
continue;
}
else if(i==15){
    break;
}
 else
 {
     printf("%d",i);
 }
  printf("\n");
}
  return 0;
}

