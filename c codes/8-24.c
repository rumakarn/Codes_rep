#include <stdio.h>
#define MAX 100
int main() {
   int arr[MAX],temp,i,n;
   printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&arr[i]);
   }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        return 1;
        printf("the elements aren't distinct\n");
    }
  
   return 0;
}
------------------------------------------------------------------
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Duplicate elements in given array: \n");    
    //Searches for duplicate element    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  
