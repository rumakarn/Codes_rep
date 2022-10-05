#include <stdio.h>
#define MAX 100
void insertionsort(int arr[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=arr[i];
        for(j=i-1;j>=0 && k<arr[j];j--){
        arr[j+1]=arr[j];}
    arr[j+1]=k;
    }
    printf("sorted list is:\n");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}
int main() {
    int i,n,item,arr[MAX],index;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter element %d:\n",i+1);
    scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    return 0;
}