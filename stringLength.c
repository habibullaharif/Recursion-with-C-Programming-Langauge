#include <stdio.h>

int stringLength(char[],int);

int main(void)
{
  char string[128]; printf("Enter a string: "); fgets(string, 128, stdin);

  int ret = stringLength(string,0);

  printf("%d",ret);

  return 0;
}

int stringLength(char string[], int count) {
  if (string[count] == '\0') {
    return count-1;
  } else {
    stringLength(string,count+1);
  }
}
