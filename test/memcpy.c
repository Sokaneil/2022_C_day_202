#include <criterion/criterion.h>
#include "stu.h"

Test(memcpy, normal) {
    char *dest;

    dest = malloc(sizeof(char) * 7);
    strcpy(dest, "Martin");
    stu_memcpy(dest, "Noah", 5);
    cr_assert_str_eq(dest, "Noah");
    free(dest);
}
