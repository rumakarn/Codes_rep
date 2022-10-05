#include <stdio.h>
#include <string.h>
int main(){
char input[100];
  int i, j;
  char temp;
  printf("\nEnter a string : ");
   gets(input);
  int stringLength = strlen(input);
  for (i = 0; i < stringLength - 1; i++) {
    for (j = i + 1; j < stringLength; j++) {
         if(input[i] >= 'a' && input[i] <= 'z')
      if (input[i] > input[j]) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
      }
         if(input[i] >= 'A' && input[i] <= 'Z')
      if (input[i] > input[j]) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
      }
         if(input[i] >= 'A' && input[i] <= 'Z')
         if(input[j] >= 'a' && input[j] <= 'z')
      if (input[i]+32 > input[j]) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
      }
    }
}
  printf("\nsorted string :%s ",input);
}