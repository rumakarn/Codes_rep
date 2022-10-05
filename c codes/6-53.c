#include <stdio.h>
double series(int x);
int main() {
   int n;
   printf("enter the number of terms:\n");
   scanf("%d",&n);
   printf("%lf",series(n));
    return 0;
}
double series(int x)
{
    
    double i,term,sum=0;
    for(i=1;i<=x;i++)
    {
        term=1/(i*i);
        sum+=term;
    }
    return sum;
}
