#include<stdio.h>

int main(){
  int num, i;
  printf(" Enter a limit number to print specific numbers: ");
  scanf("%d", & num);
  for (i = 0; i <= num; i++) {
    printf("\n");
    printf("%d", i);
  }
  return 0;
}