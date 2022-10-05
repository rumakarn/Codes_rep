#include <stdio.h>  
int main()  
{
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("the sum of square of numbers from 1 to n is %d",sum);
return 0;
} 
 
 