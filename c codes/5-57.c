#include <stdio.h>  
int main()  
{
    int x,y,i,product=1;
    printf("enter a number and the power to which it is to be raised:\n");
    scanf("%d%d",&x,&y);
    if(x>0)
    {
        for(i=1;i<=y;i++)
    {
        product*=x;
    }
    printf("the value of x raised to power y is %d",product);

    }
    else
    printf("enter positive numbers only");
    
   
return 0;
} 
 
 