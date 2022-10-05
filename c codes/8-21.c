#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],temp,i,j,num,n;
   printf("enter the number of elements:\n");
   scanf("%d",&num);
   for(i=0;i<num;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
   printf("enter the number of elements to be reversed:\n");
   scanf("%d",&n);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
   for(i=0;i<num;i++)
   {
       printf("%d ",arr[i]);
   }
}
   