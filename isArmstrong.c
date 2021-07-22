#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int sumOfDigitWithPower(int,int);
bool isArmstrong(int,int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);
  int temp = num, count = 0;

  while(temp != 0) {
    temp /= 10;
    count++;
  }

  bool ret = isArmstrong(num,count);

  if (ret == true) {
    printf("%d number is armstrong number",num);
  } else {
    printf("%d number is not armstrong number",num);
  }

  return 0;
}

int sumOfDigitWithPower(int num,int len) {
  if (num == 0) {
    return 0;
  } else {
    return pow(num%10,len) + sumOfDigitWithPower(num/10,len);
  }  
}

bool isArmstrong(int num,int len) {
  int temp = sumOfDigitWithPower(num,len);
  if (temp == num) {
    return true;
  } else {
    return false;
  }
}
