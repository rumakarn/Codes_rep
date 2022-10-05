#include <stdio.h>
float product(int x,int y);
int main() {
    float a,b;
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    printf("the product of two numbers is %f",product(a,b));
    return 0;
}
float product(int x,int y)
{
    float sum=0;
    int i;
    for(i=1;i<=y;i++){
    sum+=x;
    }
     return sum;
}