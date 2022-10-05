#include <stdio.h>
#define MAX 100
int main() {
    int i,n,arr[MAX];
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter element %d:\n",i+1);
    scanf("%d",&arr[i]);
    }
   int j,temp,changes;
    for(i=0;i<n-1;i++)
    {
        changes=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                changes++;
            }
        }
    if(changes==0)
    break;
    }
    printf("sorted list is:\n");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}