#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i,prime;
    
     printf("Prime Numbers from 1 To 99 are\n");
     
for(num=1; num<=99; num++)
{
        if(num == 1)
        {
        printf("1 is neither prime nor composite\n");
        continue;
        }
        
        prime=1;
        for(i=2;i<=sqrt(num);i++)
        {
            if(num % i == 0)
            {
            prime=0;
            break;
            }
        }
        if(prime)
       {
           printf("%d\t",num);
       } 
       
    
}   
      return 0;
}
        
 
    
