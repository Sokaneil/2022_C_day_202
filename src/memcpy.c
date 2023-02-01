/*
 * E89 Pedagogical & Technical Lab
 * project:     day 202
 * created on:  2023-01-31 - 11:04 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: memcpy
 */

void *stu_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int i;
    char *str_dest;
    char *str_src;

    i = 0;
    str_dest = (char *) dest;
    str_src = (char *) src;
    while (i < n) {
        str_dest[i] = str_src[i];
        i += 1;
    }
    return (dest);
}
