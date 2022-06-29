#include<stdio.h>

int main() {
  int num, i, sum = 0;
  printf(" Enter a limit to print the sum of odd numbers : ");
  scanf("%d", & num);
  for (i = 1; i <= num; i = i + 2) {
    sum = sum + i;
  }
  printf("\n");
  printf("%d", sum);
  return 0;
}