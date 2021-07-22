#include <stdio.h>

void printEvenNaturalNumber(int,int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printEvenNaturalNumber(-98,num);

  return 0;
}

void printEvenNaturalNumber(int i, int num) {
  if (i <= 0) {
    i = 1;
  }
  int temp = 2*i;
  if (temp >= num+1) {
    return;
  } else {
    printf("%d ",temp);
    printEvenNaturalNumber(i+1,num);
  }
}
