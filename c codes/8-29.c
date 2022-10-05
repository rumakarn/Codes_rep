#include <stdio.h>
#define MAX 100
int main() {
    int array[MAX],i,j,n;
    printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&array[i]);
   }
    for(i = 0; i< n; i++)   
    {
        for(j = i+1; j < n; j++)  
        {
            if(array[i]<array[j])
            break;
            if (j == n - 1)
                printf("%d is a leader\n", array[i]);
            }
        }
    return 0;
}