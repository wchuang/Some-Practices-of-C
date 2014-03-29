/*
 * File Name: Summation_Of_Numbers.c
 * Purpose: 計算 1+2+4+7+11+16+...+310 的累加程式(非等距)
 * Author: WChuang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int sum = 0, index = 1, next_number = 1;
  while(next_number<=310)
  {
    sum += next_number;
    next_number += index;
    index++;
  }
  printf("計算結果: %d\n", sum);
  return 0;
}
