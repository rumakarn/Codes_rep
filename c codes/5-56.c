#include <stdio.h>  
int main()  
{
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        sum=sum+i*i*i;
    }
    printf("the sum of cube of numbers from 1 to n which are divisible by 3 is %d",sum);
return 0;
} 
 
 