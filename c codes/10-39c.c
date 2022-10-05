#include<stdio.h>
#include<string.h>
char *myfunc(char *str,char *str1,int n);
int main()
{
 int i,n;
 char str[100],str1[100];

 puts("enter the first string : \n");
 gets(str);
 puts("enter the second string : \n");
 gets(str1);
 printf("enter the number:\n");
 scanf("%d",&n);
 myfunc(str,str1,n);
 printf("%s",str);
 return 0;
}
char *myfunc(char *str,char *str1,int n)
{
   int i=0,j=0;
   while(str[i]!='\0')
   i++;
   while(j<n)
   str[i++]=str1[j++]
    ;
   return str;
}