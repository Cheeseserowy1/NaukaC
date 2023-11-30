// nauka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void banknoty(int liczba);
int a = 0;
int b = 0;

int main()
{
	cout << "Podaj liczbe ile ma sie wydrukowac banknotow 100 zlotowych: " << endl;
	cin >> a;
	banknoty(a);

	return 0;
}

void banknoty(int a) {
	while (b < a){
		b++;
	
		cout << "Wydrukowano: " + b << endl;
		cout << "=========================" << endl;
		cout << "|        Banknot        |" << endl;
		cout << "|          100          |" << endl;
		cout << "|                       |" << endl;
		cout << "=========================" << endl;
	}
}

