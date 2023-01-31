/*
 * E89 Pedagogical & Technical Lab
 * project:     day 202
 * created on:  2023-01-31 - 10:23 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: memset
 */

void *stu_memset(void *ptr, char byte, unsigned int n)
{
    char *str;

    str = (char *) ptr;
    while (n > 0) {
        *str = byte;
        str += 1;
        n -= 1;
    }
    return (ptr);
}
