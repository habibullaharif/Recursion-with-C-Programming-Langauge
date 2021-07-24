#include <stdio.h>

void stringConcatenation(char [], char [], int, int);

int main(void)
{

  char str1[128] = "My name is John doe, ";
  char str2[32] = "and i'm 24 years old";

  stringConcatenation(str1,str2,0,0);

  printf("%s",str1);

  return 0;
}

void stringConcatenation(char strDest[], char strSour[], int firstIndex, int secondIndex) {
  if(strDest[firstIndex] == '\0') {
    strDest[firstIndex] = strSour[secondIndex];
    strDest[firstIndex+1] = '\0';
    if (strSour[secondIndex] == '\0') {
      return;
    } else {
      stringConcatenation(strDest,strSour,firstIndex+1,secondIndex+1);
    }
  } else {
    stringConcatenation(strDest,strSour,firstIndex+1,secondIndex);
  }
}
