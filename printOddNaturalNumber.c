#include <stdio.h>

void printOddNaturalNumber(int,int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printOddNaturalNumber(-9,num);

  return 0;
}

void printOddNaturalNumber(int i,int num) {
  if (i <= 0) {
    i = 1;
  }
  int temp = 2*i - 1;
  if (temp >= num+1) {
    return;
  } else {
    printf("%d ",temp);
    printOddNaturalNumber(i+1,num);
  }
}
