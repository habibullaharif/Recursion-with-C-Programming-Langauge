#include <stdio.h>

int stringLength(char[],int);

int main(void)
{
  char string[64]; printf("Enter a string: ");
  scanf("%s",string);

  int ret = stringLength(string,0);

  printf("%d",ret);

  return 0;
}

int stringLength(char string[], int count) {
  if (string[count] == '\0') {
    return count;
  }
  stringLength(string,count+1);
}
