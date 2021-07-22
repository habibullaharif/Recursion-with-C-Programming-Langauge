#include <stdio.h>

int addEvenNaturalNumber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  int ret = addEvenNaturalNumber(num);

  printf("%d",ret);

  return 0;
}

int addEvenNaturalNumber(int n) {
  if (n == 0 || n == 1) {
    return 0;
  }
  if (n % 2 == 1) {
    n--;
  }
  return n + addEvenNaturalNumber(n-2);
}

