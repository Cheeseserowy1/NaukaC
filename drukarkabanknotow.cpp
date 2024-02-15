#include <iostream>
using namespace std;
void banknot();

int main() {
	cout << "Podaj liczbe banknotow do wydrukowania: " << endl;
    size_t liczba;
    cin >> liczba;

    for(size_t i = 0; i < liczba; i++) banknot();

	return 0;
}

void banknot() {
	cout << "=========================" << endl;
	cout << "|        Banknot        |" << endl;
	cout << "|          100          |" << endl;
	cout << "|                       |" << endl;
	cout << "=========================" << endl << endl;
}
