#include <stdio.h>
void Uppercase(char x);
int main() {
    char lc;
    printf("Enter the lowercase number:\n");
    scanf("%c",&lc);
    Uppercase(lc);
    return 0;
}
void Uppercase(char x)
{
    int ascii;
    char upperChar;
    ascii = x;
    upperChar = ascii-32;
    printf("\nIts Uppercase = %c", upperChar);
    return 0;
}