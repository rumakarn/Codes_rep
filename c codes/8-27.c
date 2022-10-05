// Online C compiler to run C program online
#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX],i,j,temp,n,count=0;
    printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=1;j<n;j++)
       if(arr[i]>arr[j] && i<j)
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           count++;
       }
   }
   printf("The total no.of inversions is %d",count);
    return 0;
}