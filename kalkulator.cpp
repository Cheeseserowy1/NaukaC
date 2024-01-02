#include <iostream>
using namespace std;

int main() {
    cout << "Kalkulator made by Cheeseserowy1 -- Inprowed by GRATHRRAM" << endl;
    
    int liczba1,liczba2;
    char wybor;

    cout << "liczba 1: ";
    cin >> liczba1;
    
    cout << "liczba 2: ";
    cin >> liczba2;

    cout << "Wybiez dzialanie: ";
    cin >> wybor;

    if      (wybor == '+') liczba1 = liczba1 + liczba2;
    else if (wybor == '-') liczba1 = liczba1 - liczba2;
    else if (wybor == '*') liczba1 = liczba1 * liczba2;
    else if (wybor == '/') liczba1 = liczba1 / liczba2;
    else {
        cout << "Nie ma takiego działania w tym programie" << endl;
        return;
    }

    cout << "Wynik: " << liczba1 << endl;
}
