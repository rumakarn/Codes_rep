#include<stdio.h>
int main()
{
    int num,rem,rev,temp;
   printf("four digit palindromes:");
   for(num=1000;num<=9999;num++){
       temp=num;
       rev=0;
       while(temp){
           rem=temp%10;
           rev=rev*10+rem;
           temp/=10;
           
       }
       if(num==rev)
   printf("%d\t",num);
   
   }
 return 0;  
}