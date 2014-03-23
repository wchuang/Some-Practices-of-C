/*
 * File Name: Fahrenheit_To_Celsius.c
 * Purpose: Temperature converter
 * Author: Wchuang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float cels, fahr;
  printf("輸入華氏溫度: ");
  scanf("%f", &fahr);
  cels = (float)(fahr - 32) * 5 / 9;
  printf("華氏 %f 度轉換後為攝氏 %f 度\n", fahr, cels);
  return 0;
}
