#ifndef BIBLIOTEKA_HPP
#define BIBLIOTEKA_HPP
#include <iostream>

void ProgressBar(int boxes, int used) {


    printf("\x1b[%d;2;%d;%d;%dm", 38, 0, 0, 0);
    std::cout << "[";

    for (int i = 0; i < boxes; i++) {
        if (i < used) {
            printf("\x1b[%d;2;%d;%d;%dm", 38, 0, 255, 0);
            std::cout << "■";
        } else {
            printf("\x1b[%d;2;%d;%d;%dm", 38, 255, 0, 0);
            std::cout << "■";
        }
    }

    printf("\x1b[%d;2;%d;%d;%dm", 38, 0, 0, 0);
    std::cout << "]";
}

void checkbox(bool trueorfalse) {
  if (trueorfalse == true) {
    printf("\x1b[%d;2;%d;%d;%dm", 38, 0, 255, 0);
    std::cout << "■";
  } else {
    printf("\x1b[%d;2;%d;%d;%dm", 38, 255, 0, 0);
    std::cout << "■";
  }
}



#endif