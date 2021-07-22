#include <stdio.h>

int addOddNaturalNumber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  int ret = addOddNaturalNumber(num);

  printf("%d",ret);

  return 0;
}

int addOddNaturalNumber(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  if (n % 2 == 0) {
    n--;
  }
  return n + addOddNaturalNumber(n-2);
}
