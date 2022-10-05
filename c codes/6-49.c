#include <stdio.h>
float convert(float x,char  y);
int main() {
   float num;
   char unit;
   printf("enter a number and its unit(i for inch and c for centimeter): \n");
   scanf("%f %c",&num,&unit);
   printf("%f",convert(num,unit));
    return 0;
}
float convert(float x,char y){
    if(y=='i'){
         return 2.54*x;
    }
    if(y=='c'){
    return 0.393701*x;
    }
  
}
