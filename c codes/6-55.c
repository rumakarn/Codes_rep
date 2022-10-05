#include <stdio.h>
int isleap(int x);
int main() {
   int n;
   printf("enter the year\n");
   scanf("%d",&n);
   printf("%d",isleap(n));
    return 0;
}
int isleap(int x)
{
    if(x%100!=0 && x%4==0 || x%400==0)
    return 1;
    
return 0;
}