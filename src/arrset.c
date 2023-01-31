/*
 * E89 Pedagogical & Technical Lab
 * project:     day 202
 * created on:  2023-01-31 - 13:17 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: arrset
 */

#include "stu.h"

void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n)
{
    char *str;

    str = (char *) array;
    while (n > 0) {
        stu_memcpy(str, elem, elem_size);
        str += elem_size;
        n -= 1;
    }
    return (array);
}
