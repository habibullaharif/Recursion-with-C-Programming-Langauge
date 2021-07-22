#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int reverseNum(int,int);
bool isPalindrome(int,int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);
  int temp = num, count = 0;

  while(temp != 0) {
    temp /= 10;
    count++;
  }

  bool ret = isPalindrome(num,count);

  if (ret == true) {
    printf("%d is palindrome number",num);
  } else {
    printf("%d is not palindrome number",num);
  }

  return 0;
}
int reverseNum(int num, int len) {
  if (len == 0) {
    return 0;
  } else {
    return (num%10)*pow(10,len-1) + reverseNum(num /10,len-1);
  }  
}

bool isPalindrome(int num, int len) {
  int temp = reverseNum(num,len);
  if (temp == num) {
    return true;
  } else {
    return false;
  }
}
