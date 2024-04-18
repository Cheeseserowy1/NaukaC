#ifndef COLOR_PRINT_H
#define COLOR_PRINT_H
#include <stdint.h>
#include <stdio.h>

//made by GRATHRRAM

typedef struct color {
  uint8_t r;
  uint8_t g;
  uint8_t b;
} color;

void PrintWithColor(color Color, const char *String) {
  printf("\x1b[%d;2;%d;%d;%dm", 38, Color.r, Color.g, Color.b);
  puts(String);
  printf("\x1b[0m");
}

#endif
