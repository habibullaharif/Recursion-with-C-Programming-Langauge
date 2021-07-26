#include <stdio.h>

int stringLength(char [],int);

void stringReverse(char [],int);

int main(void)
{
  char str[128]; printf("Enter a string: ");
  fgets(str, 128, stdin);

  int length = stringLength(str,0);

  stringReverse(str,length);

  return 0;
}

int stringLength(char string[], int index) {
  if (string[index] == '\0') {
    return index-1;
  } else {
    stringLength(string,index+1);
  }
}

void stringReverse(char string[], int size) {
  if (size-1 == -1) {
    return;
  } else {
    printf("%c",string[size-1]);
    stringReverse(string,size-1);
  }
}
