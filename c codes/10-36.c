#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char a[100];

 
 puts("enter a string : \n");
 gets(a);

 printf("\n\nAbbreviated output is : \n\n%c",a[0]);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
   printf("%c",a[i+1]);
 }
 return 0;
}