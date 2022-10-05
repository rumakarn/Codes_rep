#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],temp,i,j,num,n;
   printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    
        }
        }
    }
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   printf("\n");
   return 0;
}

#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],temp,i,j,num,n;
   printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j+1]>arr[j])
            {
                temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
    
        }
        }
    }
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   printf("\n");
   return 0;
}

   