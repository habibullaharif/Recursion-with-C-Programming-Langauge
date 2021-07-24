#include <stdio.h>
#include <math.h>

void choice();

int sumOfDivisor(int,int);

void isPerfect(int);

void isAbundant(int);

void isDeficient(int);

void isPrime(int);

int main(void)
{
  choice();
  
  int num; printf("Enter number: "); scanf("%d",&num);

  int choice; printf("Enter your choice: "); scanf("%d",&choice);

  switch(choice) {
    case 1: isPerfect(num); break;
    case 2: isAbundant(num); break;
    case 3: isDeficient(num); break;
    case 4: isPrime(num); break;
    default: puts("Enter right choice"); break;
  }

  return 0;
}

void choice() {
  puts("1 for Perfect number cheacking");
  puts("2 for Abundant number cheacking");
  puts("3 for Deficient number cheacking");
  puts("4 for Prime number cheacking");
  puts("");
}

int sumOfDivisor(int num, int i) {
  if (i >= sqrt(num)) {
    return 0;
  } else {
    if (num % i == 0) {
      if (num / i == i) {
        return i + sumOfDivisor(num,i+1);
      } else {
        return i + num/i + sumOfDivisor(num,i+1);
      }
    } else {
      return sumOfDivisor(num,i+1);
    }
  }
}

void isPerfect(int num) {
  int temp = sumOfDivisor(num, 1);
  if (temp == 2*num) {
    printf("\n%d is Perfect number\n",num);
  } else {
    printf("\n%d is not Perfect number\n",num);
  }
}

void isAbundant(int num) {
  int temp = sumOfDivisor(num, 1);
  if (temp > 2*num) {
    printf("\n%d is Abundant number\n",num);
  } else {
    printf("\n%d is not Abundant number\n",num);
  }
}

void isDeficient(int num) {
  int temp = sumOfDivisor(num, 1);
  if (temp < 2*num ) {
    printf("\n%d is Deficient number\n",num);
  } else {
    printf("\n%d is not Deficient number\n",num);
  }
}

void isPrime(int num) {
  int temp = sumOfDivisor(num, 1);
  if (temp == num+1) {
    printf("\n%d is Prime number\n",num);
  } else {
    printf("\n%d is not Prime number\n",num);
  }
}
