#include <stdio.h>
int main()
{
  int i,j,space,k=o,n;
  printf("this line is added by sai");
  printf("this is code for pattern ");
  printf("\nenter the number of rows : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  { 
    for(int j=1;j<=n-1;j++)
     { 
       printf(" ");
     }
     for(j=1;j<=1;j++)
     {
       printf("*");
     }
     printf("\n");
   }
  for(int i=n-1;i>0;i-)
   {
     for(int j=1;j<=n-i;j++)
     {
       printf(" ");
      }
     for(int j=1;j<=i;j++);
     {
       printf("*");
      }
      printf("\n");
    }
}
