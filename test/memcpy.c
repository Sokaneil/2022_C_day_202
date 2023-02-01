#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(memcpy, normal) {
    char *dest;

    dest = malloc(sizeof(char) * 7);
    strcpy(dest, "Martin");
    stu_memcpy(dest, "Noah", 5);
    cr_assert_str_eq(dest, "Noah");
    free(dest);
}
Test(memcpy, int_) {
    int *dest;
    unsigned int arr_size;
    int test[12] = {1, 56, 5, 537, 6, 54, 5, 6, 7, 5, 2, 3};

    arr_size = sizeof(int) * 12;
    dest = malloc(arr_size);
    stu_memcpy(dest, test, arr_size);
    cr_assert(eq(int[12], dest, test));
    free(dest);
}
