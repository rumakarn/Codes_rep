#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],large1,large2,i,n;
   printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
    large1=arr[0];
   for(i=1;i<n;i++)
   {
       if (arr[i]>large1)
       large1=arr[i];
   }
   large2=arr[0];
    for(i=1;i<n;i++)
   {
       if (large2>arr[i] && large2<large1)
       large1=arr[i];
   }
   printf("Largest=%d\n second largest=%d",large1,large2);
}
   