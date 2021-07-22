#include <stdio.h>

void printNaturalNumber(int,int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printNaturalNumber(1,num);

  return 0;
}

void printNaturalNumber(int i,int num) {
  if (i == num+1) {
    return;
  } else {
    printf("%d ",i);
    printNaturalNumber(i+1,num);
  }
}
