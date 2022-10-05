#include <stdio.h> 
int twinprime(int n); 
int main ()  
{  
    int i;  
    for (i = 2; i <= 1000; i++)  
    {  
        if (twinprime (i) && twinprime (i+2))  
        {  
            printf (" \n The twin prime number is: (%d, %d) ", i, i+2);
        }  
    }  
    return 0;  
}  
int twinprime(int n)  
{  
    int j;  
  
    for (j = 2; j<=n/2; j++)  
    {  
        if (n%j == 0)  
            return 0;  
    }  
      
    if (j > n/2)
        return 1;  
}  