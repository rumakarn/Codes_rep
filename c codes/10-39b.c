#include<stdio.h>
#include<string.h>
void myfunc(char *str,char *str1,int n);
int main()
{
 int i,n;
 char str[100],str1[100];

 puts("enter the first string : \n");
 gets(str);
 puts("enter the second string : \n");
 gets(str1);
 printf("enter the number of digit: \n");
 scanf("%d",&n);
 myfunc(str,str1,n);
 return 0;
}
void myfunc(char *str,char *str1,int n)
{
    int i,flag;
     for(i=0;str[i]!='\0'|| str1[i]!='\0';i++)
    {
        while(i<n)
        if(str[i]!=str1[i])
        flag=1;
        break;
    }
    if(flag==1)
    printf("not same");
    else
    printf("same");
}