#include <stdio.h>
int check(int a,int b,int c,int d,int e,int f);
int main() {
   int d1,d2,m1,m2,y1,y2;
   printf("enter valid first date(dd/mm/yyyy):\n");
   scanf("%d/%d/%d",&d1,&m1,&y1);
   printf("enter valid second date(dd/mm/yyyy):\n");
   scanf("%d/%d/%d",&d2,&m2,&y2);
   printf("%d",check(d1,m1,y1,d2,m2,y2));
return 0;
}
 int check(int a,int b,int c,int d,int e,int f)
 {
     if(c<f) 
     return 1;
     else if (c==f && b<e)
     return 1;
     else if (c==f && b==e && b<e)
     return 1;
return 0;
 }