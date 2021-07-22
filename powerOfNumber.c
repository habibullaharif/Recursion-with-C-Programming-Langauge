#include <stdio.h>

int powerOfNumber(int,int);

int main(void)
{
  int base; printf("Enter a base: "); scanf("%d",&base);
  int expo; printf("Enter a expo: "); scanf("%d",&expo);

  int ret = powerOfNumber(base, expo);

  printf("%d",ret);

  return 0;
}

int powerOfNumber(int base, int expo) {
  if (expo == 1 || base == 1 || base == 0) {
    return base;
  } else {
    return base * powerOfNumber(base,expo-1);
  }
}
