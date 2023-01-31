/*
 * E89 Pedagogical & Technical Lab
 * project:     day 202
 * created on:  2023-01-31 - 10:48 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: header files
 */

#ifndef _STU_H_
#define _STU_H_

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n);
void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n);
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n);

#endif
