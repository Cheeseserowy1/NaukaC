#include <iostream>
#include <stdio.h>
int punkty, robotpunkty = 0;
int koniec = 0;
void gra() {
    int wyborbot = rand() % 3;
    wyborbot++;
    int wybor = 0;
    std::cout << "Podaj papier = 1, kamien = 2 czy nozyce = 3: " << std::endl;
    std::cin >> wybor;
    if ((wybor == 1 and wyborbot == 1) or (wybor == 2 and wyborbot == 2) or (wybor == 3 and wyborbot == 3)) { std::cout << "Remis" << std::endl; std::cout << "Twoj wynik: " << punkty << std::endl; std::cout << "Wynik bota: " << robotpunkty << std::endl; }
    if ((wybor == 1 and wyborbot == 2) or (wybor == 2 and wyborbot == 1) or (wybor == 3 and wyborbot == 1)) { std::cout << "Wygrales" << std::endl; punkty++; std::cout << "Twoj wynik: " << punkty << std::endl; std::cout << "Wynik bota: " << robotpunkty << std::endl; }
    if ((wybor == 1 and wyborbot == 3) or (wybor == 2 and wyborbot == 1) or (wybor == 3 and wyborbot == 2)) { std::cout << "Bot wygral" << std::endl; robotpunkty++; std::cout << "Twoj wynik: " << punkty << std::endl; std::cout << "Wynik bota: " << robotpunkty << std::endl; }
}
int main()
{
    std::cout << "Papier, kamien i nozyce" << std::endl;
    std::cout << "Made by Cheeseserowy" << std::endl;
    while (koniec == 0)
    {
        if (koniec == 0) {
            gra();
            std::cout << "Koniec czy nie? Jak tak to wpisz 1, jak nie to wpisz 0" << std::endl;
            std::cin >> koniec;
        }
    }
}

