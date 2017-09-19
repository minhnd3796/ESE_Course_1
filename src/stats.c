/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Minh Nguyen
 * @date August 5th, 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(&test[0], SIZE);
  printf("\n");
  sort_array(&test[0], SIZE);
  print_array(&test[0], SIZE);
  printf("\n");
  print_statistics(&test[0], SIZE);
}

void print_statistics(unsigned char *arr, int length)
{
  printf("Minimum value: %d\n", find_minimum(&arr[0], length));
  printf("Maximum value: %d\n", find_maximum(&arr[0], length));
  printf("Median value: %d\n", find_median(&arr[0], length));
  printf("Mean value: %d\n", find_mean(&arr[0], length));
}

void print_array(unsigned char *arr, int length)
{
  int i;
  for (i = 0; i < length; i++)
    printf("%d ", arr[i]);
}

unsigned char find_median(unsigned char *arr, int length)
{
  unsigned char ret_val;
  int mid;
  if (!length)
  {
    ret_val = -1;
  }
  else
  {
    mid = length - 1;
    mid /= 2;
    if (length % 2 == 0)
    {
      ret_val = ((int) (arr[mid] + arr[mid + 1])) / 2;
    }
    else
    {
      ret_val = arr[mid];
    }
  }
  return (unsigned char) ret_val;  
}

unsigned char find_mean(unsigned char *arr, int length)
{
  int sum;
  int i;
  sum = 0;
  for (i = 0; i < length; i++)
  {
    sum += arr[i];
  }
  return (unsigned char) (sum / length);
}

unsigned char find_maximum(unsigned char *arr, int length)
{
  return arr[0];
}

unsigned char find_minimum(unsigned char *arr, int length)
{
  return arr[length - 1];
}

void sort_array(unsigned char *arr, int length)
{
  unsigned char tmp;
  int i;
  int j;
  for (i = 0; i < length - 1; i++)
  {
    for (j = i + 1; j < length; j++)
    {
      if (arr[i] < arr[j])
      {
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
}
