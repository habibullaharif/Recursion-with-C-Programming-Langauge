#include <stdio.h>

void stringCopy(char [],char [], int);

int main(void)
{
  char str1[128]; printf("Enter a string: "); fgets(str1, 128, stdin);

  char str2[128];

  stringCopy(str1,str2,0);

  printf("\nsource string: %s\n",str2);

  printf("destination string: %s",str2);

  return 0;
}

void stringCopy(char strSour[],char strDest[], int index) {
  if (strSour[index] == '\0') {
    return;
  } else {
    strDest[index] = strSour[index];
    stringCopy(strSour,strDest,index+1);
  }
}
