#include <stdio.h>

int stringCompare(char [],char [], int);

int main(void)
{
  char str1[128] = "C Programming Language";

  char str2[128] = "C Programming Language";

  int ret = stringCompare(str1, str2, 0);

  if(ret == 1) {
    puts("Two strings are same");
  } else {
    puts("Two strings aren't same");
  }

  return 0;
}

int stringCompare(char strFirst[],char strSecond[], int index) {
  if (strFirst[index] == strSecond[index]) {
    if ((strFirst[index] == '\0') && (strSecond[index] == '\0')) {
      return 1;
    } else {
      stringCompare(strFirst,strSecond,index+1);
    }
  } else {
    return 0;
  }
}
