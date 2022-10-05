// Online C compiler to run C program online
#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX],i,temp,n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
        return 1;
    }
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("new array:\n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}