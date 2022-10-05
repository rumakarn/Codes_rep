#include <stdio.h>
void func(int n);
int main()
{
 int n,i;
 printf("enter the number of terms:\n");
 scanf("%d",&n);
 func(n);
  return 0;
}
void func(int n)
{
  int i;
  if(n==0)
  return;
  else
  {
      func(n-1);
      for(i=1; i<= n-i; i++)
        printf(" ");
      for(i=1; i<= 2*n-1; i++)
        printf("*");
        printf("\n");
        
  }
 return;
}