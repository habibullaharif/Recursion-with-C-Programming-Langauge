#include <stdio.h>

void stringUpper(char [], int);

int main(void)
{
  char string[128] = "c programming language";

  stringUpper(string,0);

  puts(string);

  return 0;
}

void stringUpper(char string[], int index) {
  if (string[index] == '\0') {
    return;
  } else {
    if (string[index] >= 97 && string[index] != 32) {
      string[index] = string[index] - 32;
      stringUpper(string, index+1);
    } else {
      stringUpper(string, index+1);
    }
  }
}
