// Online C compiler to run C program online
#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],large,small,i,n;
   printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
    small=large=arr[0];
   for(i=1;i<n;i++)
   {
       if (arr[i]<small)
       small=arr[i];
       if (arr[i]>large)
       large=arr[i];
   }
  printf("difference=%d",large-small);
    return 0;
}