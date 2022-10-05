#include <stdio.h>
#define MAX 100
int linearsearch(int arr[], int item,int n);
int main() {
    int i,n,item,arr[MAX],index;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter element %d:\n",i+1);
    scanf("%d",&arr[i]);}
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    index= linearsearch(arr,item,n);
    if(index==-1)
    printf("element not found");
    else
    printf("item found at index %d\n",index);
    
    return 0;
}
int linearsearch(int arr[], int item,int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(arr[i]==item)
       break;
   }
   if(i<n)
   return i;
   else
   return -1;
}