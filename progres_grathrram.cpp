#include <iostream>

typedef struct progres {
  unsigned int progres;
  unsigned int max;
} progres;

typedef struct color {
  unsigned int r;
  unsigned int g;
  unsigned int b;
} color;

void print_progres(progres *pro, color Color, color Color2) {
  printf("\x1b[%d;2;%d;%d;%dm", 38, Color.r, Color.g, Color.b);
  for (unsigned int i = 0; i < pro->progres; i++)
    std::cout << "■";

  printf("\x1b[%d;2;%d;%d;%dm", 38, Color2.r, Color2.g, Color2.b);
  for (unsigned int i = pro->progres; i < pro->max; i++)
    std::cout << "■";
  std::cout << std::endl;
  printf("\x1b[0m");
}

int main() {
  progres pro;
  pro.progres = 5;
  pro.max = 10;

  print_progres(&pro, (color){255, 0, 0},(color){0, 255, 0});

  return 0;
}
