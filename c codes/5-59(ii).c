#include<stdio.h>
int main()
{
    int i,n,sum=0,x,product=1;
    printf("enter the term and number of terms:\n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
         product*=x;
         sum=sum+product;
    }
    printf("sum of the series = %d",sum);
    
  return 0; 
    
}