#include<stdio.h>
#include<string.h>
void compare(char str1[],char str2[]);
int main()
{
    char str1[100], str2[100];

   printf("Enter first string for comparing (case insensitive)\n");
   gets(str1);

   printf("Enter second string for comparing (case insensitive)\n");
   gets(str2);
   compare(str1,str2);
   return 0;
}
void compare(char str1[],char str2[])
{
    int i,flag=0;
    for(i=0; str1[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i] = str1[i] - 32;
        }
    }
     for(i=0; str2[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str2[i]>='a' && str2[i]<='z')
        {
            str2[i] = str2[i] - 32;
        }
    }


    for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        flag=1;
        break;
    }
    if(flag==1)
    printf("not same");
    else
    printf("same");
 
}