/*
 * File Name: Array_Searching.c
 * Purpose: Search specific content of array sequentially
 * Author: WCHuang
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define array_size 30

int search(int [], int, int);

int main(void)
{
  int array[array_size], search_content, start = 0, result_index;
  srand(time(NULL));
  for (int i=0; i<array_size; i++) {
    array[i] = rand() % 10 + 1;
  }
  printf("請輸入要找的內容:");
  scanf("%d", &search_content);
  while (start < array_size) {
    result_index = search(array, start, search_content);
    if (-1 != result_index) {
      printf("%d在第%d個位置\n", search_content, result_index);
    } else {
      if (0 == start) {
        printf("要找的內容不在陣列中\n");
      }
      break;
    }
    start = result_index + 1;
  }
  return 0;
}

int search(int array[], int start, int content)
{
  for (int i=start; i<array_size; i++) {
    if (content == array[i]) {
      return i;
    }
  }
  return -1;
}
