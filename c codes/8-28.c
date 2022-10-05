#include <stdio.h>
#define MAX 100
int main() {
    int array[MAX],i,j,temp,n,count=1,maxCount=0,maxElement;
    printf("enter the number of elements:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter element %d:",i+1);
       scanf("%d",&array[i]);
   }
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */  
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than 
                maxCount, then update maxElement */
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    printf("The most frequent element is %d",maxElement);
    return 0;
}
