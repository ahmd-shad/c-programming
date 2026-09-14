#include <stdio.h>
int main(){
  int mark[2][2][2],i,j,k;
  printf("enter mark for 2 student,2 subject,and 2 exams:\n");
  for(i=0;i<2;i++)
  {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&mark[i][j][k]);
            }
        }
  }
  printf("\nall mark:\n");
  for(i=0;i<2;i++)
  {
      printf("student %d:\n",i+1);

      for(j=0;j<2;j++)
      {
          printf("subject %d:",j+1);

          for(k=0;k<2;k++)
          {
              printf("%d",mark[i][j][k]);
          }
          printf("\n");
      }
  }
  return 0;
}
