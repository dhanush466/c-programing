#include<stdio.h>
int main()
{
  int i=1;
  int n;
  printf("enter number:");
  scanf("%d",&n);//3
  for(i=1;i<n;i++)
  {   if(i%2==0){
      sum=sum+i;
     }
   }
      printf("sum=%d,"sum);
}
