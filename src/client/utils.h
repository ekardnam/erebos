#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/* Helper to count new line characters in a string */
static inline int count_lines(const char *str) {
  int count = 0;
  while (*str) {
    if (*str == '\n') count++;
    str++;
  }
  return count;
}
int split_fraction_links(char *data, char *data_arr[], int maxlines);

#endif // UTILS_H 
