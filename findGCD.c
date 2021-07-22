#include <stdio.h>

int findGCD(int,int);

int main(void)
{
  int a; printf("Enetr first number: ");scanf("%d",&a);
  int b; printf("Enetr escond number: ");scanf("%d",&b);

  int ret = findGCD(a,b);

  printf("gcd(%d,%d) = %d",a,b,ret);

  return 0;
}

int findGCD(int a, int b) {
  if (a == 0 && b == 0) {
    return 0;
  } else if (a == b + 1 || a == 1 || b == 1) {
    return 1;
  } else if(a % 2 == 1 && a == b + 2) {
    return 1;
  } else if(a % 2 == 0 && a == b + 2) {
    return 2;
  } else if (b == 0) {
    return a;
  } else if (a == 0) {
    return b;
  } else if (a == b) {
    return a;
  } else {
    return (a % b == 0) ? b : findGCD(b ,a%b);
  }
}
