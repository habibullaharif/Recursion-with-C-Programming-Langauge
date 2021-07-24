#include <stdio.h>

void stringLower(char [], int);

int main(void)
{
  char string[128] = "C PROGRAMMING LANGUAGE";

  stringLower(string,0);

  puts(string);

  return 0;
}

void stringLower(char string[], int index) {
  if (string[index] == '\0') {
    return;
  } else {
    if (string[index] >= 65 && string[index] < 97 && string[index] != 32) {
      string[index] = string[index] + 32;
      stringLower(string, index+1);
    } else {
      stringLower(string, index+1);
    }
  }
}
