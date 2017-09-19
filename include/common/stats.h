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
 * @file stats.h
 * @brief Delarations of Statistics Functions
 *
 *
 * @author Minh Nguyen
 * @date August 5th, 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

 /**
 * @brief Prints the array to the screeen
 *
 * @param *arr      The array to be printed
 * @param length    The length of the array to be printed
 */
void print_array(unsigned char *arr, int length);

 /**
 * @brief Prints the statistics of an array
 *
 * @param *arr      The array to be printed
 * @param length    The length of the array to be printed
 *
 * This function prints the minimum, maximum, mean
 * and median value of an array.
 */
void print_statistics(unsigned char *arr, int length);

/**
 * @brief Returns the median value
 *
 * Return the median value of an array
 *
 * @param *arr      The array to be examined
 * @param length    The length of the array
 *
 * @return unsigned median value of an array
 */
 unsigned char find_median(unsigned char *arr, int length);

/**
 * @brief Returns the mean value
 *
 * Return the mean value of a sorted array
 *
 * @param *arr      The array to be examined
 * @param length    The length of the array
 *
 * @return unsigned mean value of an array
 */
 unsigned char find_mean(unsigned char *arr, int length);

 /**
 * @brief Returns the maximum value
 *
 * Return the maximum value of a sorted array
 *
 * @param *arr      The array to be examined
 * @param length    The length of the array
 *
 * @return unsigned maximum value of an array
 */
 unsigned char find_maximum(unsigned char *arr, int length);

 /**
 * @brief Returns the minimum value
 *
 * Return the minimum value of a sorted array
 *
 * @param *arr      The array to be examined
 * @param length    The length of the array
 *
 * @return unsigned minimum value of an array
 */
 unsigned char find_minimum(unsigned char *arr, int length);

  /**
 * @brief Sorts the array
 *
 * Sorts the array from largest to smallest
 *
 * @param *arr      The array to be sorted
 * @param length    The length of the array
 */
 void sort_array(unsigned char *arr, int length);

#endif /* __STATS_H__ */
