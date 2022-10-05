#include<stdio.h>
int main()
{
    int i,n,sum=0,term=1;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         sum=sum+term;
         term=term*10+1;
    }
    printf("sum of the series = %d",sum);
    
  return 0; 
    
}