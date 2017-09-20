#include <stdint.h>
#include "data.h"
#include "memory.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base)
{
    int8_t positive = 1;
    uint8_t length = 1, i = 0, mod, one_char;
    if (data < 0)
    {
        positive = 0;
        data = abs(data);
    }
    if (data == 0)
    {
        *ptr = '0';
        *(ptr + 1) = '\0';
    }
    else
    {
        while (data > 0)
        {
            mod = data % base;
            switch (mod)
            {
                case 10:
                    one_char = 'a';
                    break;
                case 11:
                    one_char = 'b';
                    break;
                case 12:
                    one_char = 'c';
                    break;
                case 13:
                    one_char = 'd';
                    break;
                case 14:
                    one_char = 'e';
                    break;
                case 15:
                    one_char = 'f';
                    break;
                default:
                    one_char = mod + ASCII_OFFSET;
                    break;
            }
            *(ptr + i) = one_char;
            i++;
            data /= base;
        }
        *(ptr + i) = 0;
        my_reverse(ptr, i);
        if (!positive)
        {
            my_memmove(ptr, ptr + 1, i + 1);
            *ptr = '-';
            i++;
        }
        length = i;
    }
    return length;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)
{
    uint8_t positive = 1, i = 0, j;
    uint32_t tmp_value;
    int32_t retVal = 0;
    if (*ptr == '-')
    {
        positive = 0;
    }
    if (digits == 1 && *ptr == 0)
    {
        retVal = 0;
    }
    else
    {
        if (!positive)
        {
            i = 1;
        }
        while (*(ptr + i) != 0)
        {
            switch (*(ptr + i))
            {
                case 'a':
                    tmp_value = 10;
                    break;
                case 'b':
                    tmp_value = 11;
                    break;
                case 'c':
                    tmp_value = 12;
                    break;
                case 'd':
                    tmp_value = 13;
                    break;
                case 'e':
                    tmp_value = 14;
                    break;
                case 'f':
                    tmp_value = 15;
                    break;
                default:
                    tmp_value = *(ptr + i) - ASCII_OFFSET;
                    break;
            }
            for (j = digits - i - 1; j > 0; j--)
            {
                tmp_value *= base;
            }
            retVal += tmp_value;
            i++;
        }
        if (!positive)
        {
            retVal = -retVal;
        }
    }
    return retVal;
}
