#include<stdio.h>
#include<string.h>
void uppercase(char str[]);
int main()
{
    char str[50];
    printf("enter a string:");
    gets(str);
    uppercase(str);  
    return 0;
}
void uppercase(char str[])
{
    
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    

}