#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,n;
 char a[100];

 
 puts("enter a string : \n");
 gets(a);
 printf("enter the starting index of substring: \n");
 scanf("%d",&k);
printf("enter the last index of substring: \n");
 scanf("%d",&n);
{
       int i;
       for(i=k; i<= n; i++)
           printf("%c",a[i]);
    }
return 0;
}