#include<stdio.h>
#include<string.h>
char *myfunc(char *str,char *str1,int n);
int main()
{
 int i,n;
 char str[100],str1[100];

 puts("enter a string : \n");
 gets(str1);
 printf("enter the number of letters to be printed:");
 scanf("%d",&n);
 myfunc(str,str1,n);
 printf("The string is %s",str);
 return 0;
}
char *myfunc(char *str,char *str1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      str[i]=str1[i];
    }
    return str;
}