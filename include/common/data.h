/**
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
 
 /**
  * @brief Sets a value of a data array 
  *
  * Given a pointer to a char data set, this will set a provided
  * index into that data set to the value provided.
  *
  * @param ptr Pointer to data array
  * @param index Index into pointer array to set value
  * @param value value to write the the locaiton
  *
  * @return void.
  */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);
#endif
