#include <stdio.h>
 int sumPdivisors(int n);
int main() {
 
 int num;
 printf("enter a number:\n");
 scanf("%d",&num);
 printf("the sum of proper divisors of num is %d\n",sumPdivisors(num));
    return 0;
}
int sumPdivisors(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0){
            sum+=i;
        }
    }
return sum;
}

