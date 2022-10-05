#include <stdio.h>

int main() {
    int i,j,p=1;
    for(i=1;i<=10;i++)
    {
           for(j=1;j<=8;j++){
        printf("%3d\t",p++);
        }
        printf("\n");
    }
    
    return 0;
}