#include <stdio.h>
void perfect(int x,int y);
int main()
{
    int a,b;
    printf("enter a range:\n");
    scanf("%d %d",&a,&b);
    perfect(a,b);
}
void perfect(int x,int y)
{
    int i,j,sum;
    for(i=x; i<=y; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d\n",i);
        }
    }
}