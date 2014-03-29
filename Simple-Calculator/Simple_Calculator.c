/*
 * File Name: Simple_Calculator.c
 * Purpose: A simple calculator (+, -, *, /)
 * Author: WChuang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num_1, num_2;
  char operator;
  printf("請輸入 + - * / 的二元運算式,\ne.g. 3 + 5: ");
  scanf("%d %c %d", &num_1, &operator, &num_2);
  switch(operator) {
    case '+':
      printf("計算結果: %d\n", num_1 + num_2);
      break;
    case '-':
      printf("計算結果: %d\n", num_1 - num_2);
      break;
    case '*':
      printf("計算結果: %d\n", num_1 * num_2);
      break;
    case '/':
      printf("計算結果: %f\n", (float)num_1 / num_2);
      break;
    default:
      printf("輸入格式錯誤。\n");
  }
  return 0;
}
