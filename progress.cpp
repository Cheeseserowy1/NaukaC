#include <iostream>

void checkbox(bool isright) {
    if (isright == true) {
        std::cout << "X";
    } else {
        std::cout << "O";
    }
}

void progressbar(int boxes, int used) {
    int white = boxes - used;

    for (int i = 0; i < boxes; i++) {
        if (i < used) {
            std::cout << "X";
        } else {
            std::cout << "O";
        }
    }
}

int main() {
    progressbar(10, 6);



    return 0;

    int test;

    std::cin >> test;
}