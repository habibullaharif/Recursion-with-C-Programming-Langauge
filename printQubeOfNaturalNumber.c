#include <stdio.h>

void printQubeOfNaturalNumber(int,int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  printQubeOfNaturalNumber(1,num);

  return 0;
}

void printQubeOfNaturalNumber(int i,int num) {
  if (i == num+1) {
    return;
  } else {
    int temp = i * i * i;
    printf("%d ",temp);
    printQubeOfNaturalNumber(i+1,num);
  }
}
