#include <stdio.h>

int findLCM(int,int,int);

int main(void)
{
  int a; printf("Enetr first number: ");scanf("%d",&a);
  int b; printf("Enetr escond number: ");scanf("%d",&b);
  int i = 1;

  int ret = findLCM(a,b,i);

  printf("lcm(%d,%d) = %d",a,b,ret);

  return 0;
}

int findLCM(int a,int b,int i) {
  if (a == 0 || b == 0) {
    return 0;
  } else if (a == 1) {
    return b;
  } else if (b == 1) {
    return a;
  } else if (a == b) {
    return a;
  } else if (a % b == 0) {
    return a;
  } else {
    return (a*i % b == 0) ? a*i : findLCM(a,b,i+1);
  }
}
