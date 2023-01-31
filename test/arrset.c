/*
 * E89 Pedagogical & Technical Lab
 * project:     day 202
 * created on:  2023-01-31 - 14:27 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: arrset
 */

#include <criterion/criterion.h>
#include "stu.h"

Test(arrset, normal) {
    int i;
    unsigned int elem_size;
    int *array;
    int default_value = 1970;

    i = 0;
    elem_size = sizeof(int);
    array = malloc(elem_size * 89);
    arrset(array, &default_value, elem_size, 89);
    while (i < 89) {
    cr_assert_eq(array[i], 1970);
    i += 1;
    }
}
