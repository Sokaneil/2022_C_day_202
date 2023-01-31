#include <criterion/criterion.h>
#include "stu.h"

Test(memset, int_array) {
    unsigned int arr_size;
    int *array;
    int i;

    i = 0;
    arr_size = sizeof(int) * 12;
    array = malloc(arr_size);
    stu_memset(array, 0, arr_size);
    while (i < 12) {
        cr_assert_eq(array[i], 0);
        i += 1;
    }
}
Test(memset, char_array) {
    unsigned int arr_size;
    char *array;
    int i;

    i = 0;
    arr_size = sizeof(int) * 12;
    array = malloc(arr_size);
    stu_memset(array, 12, arr_size);
    while (i < 12) {
        cr_assert_eq(array[i], 12);
        i += 1;
    }
}
