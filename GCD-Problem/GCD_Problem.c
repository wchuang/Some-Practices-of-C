/*
 * File Name: GCD_Problem.c
 * Purpose: 計算兩數的最大公因數 (GCD)
 * Author: WCHuang
 */

#include <stdio.h>

int gcd_func(int first, int second)
{
  if (0 == first % second) {
    return second;
  } else {
    return gcd_func(second, first % second);
  }
}

int main(void)
{
  int first_num = 0, second_num = 0, result_num = 0;
  printf("輸入欲計算最大公因數的兩個數字(空格分開):");
  scanf("%d %d", &first_num, &second_num);
  result_num = gcd_func(first_num, second_num);
  printf("%d 及 %d 的最大公因數為 %d\n", first_num, second_num, result_num);
  return 0;
}
