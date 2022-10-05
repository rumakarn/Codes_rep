#include <stdio.h>

int main() {
    int  num;
    void table(int n);
    printf("enter a number :\n");
    scanf("%d",&num);
    table(num);
    
    return 0;
}
void table(int n)
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        j=n*i;
        printf("%d*%d=%d \n",n,i,j);
    }
    return;
}
