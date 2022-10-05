#include <stdio.h>  
int main()  
{  
   int n;  // variable declaration  
   int count=0;   // variable declaration  
   printf("Enter a number");  
   scanf("%d",&n); 
   if(n==0)
   printf("the number of digits is 1");
   else
   {
       while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d",count);  
   }
   
    return 0;  
}  