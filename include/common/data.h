/**
 * @file data.h
 * @brief Some very basic data manipulation
 *
 * This header file provides an abstraction of converting simple
 * data via function calls.
 *
 * @author Minh Nguyen
 * @date Sep 20 2017
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

#define BASE_16 (16)
#define BASE_10 (10)
#define BASE_2 (2)

#include <stdint.h>
 
/**
* @brief Converts data from a standard integer type into an ASCII string
*
* Given data value, a pointer to output string and base of output.
*
* @param data Data need to be converted
* @param ptr Pointer to the output string
* @param base base of the output
*
* @return The length of the converted data (including a negative sign).
*/
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
* @brief Converts data back from an ASCII represented string into an integer type
*
* Given an input string pointer, a pointer to output string and base of output.
*
* @param ptr Pointer to input string
* @param digits Number of digits in character set
* @param base Base of the output
*
* @return 32-bit signed integer
*/
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __DATA_H__ */
