/*
 * File Name: Multiplication_Table.c
 * Purpose: 九九乘法表
 * Author: WChuang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for(int i=1; i<10; i++) {
    for(int j=1; j<10; j++) {
      printf("%2d * %2d = %2d | ", j, i, i*j);
    }
    printf("\n");
  }
  return 0;
}
