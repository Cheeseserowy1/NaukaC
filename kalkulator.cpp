

#include <iostream>
using namespace std;

void kalkulacja();

int main()
{
    cout << "Kalkulator made by Cheeseserowy1" << endl;
    cout << "" << endl;
    cout << "" << endl;
    kalkulacja();
}


void kalkulacja() {
    int a;
    int b;
    string wybor;

    cout << "Podaj A: ";
    cin >> a;
    
    cout << "Podaj B: ";
    cin >> b;

    cout << "Podaj dzialanie: ";
    cin >> wybor;

    if (wybor == "+") {
        a = a + b;
    }
    else if (wybor == "-") {
        a = a - b;
    }
    else if (wybor == "*") {
        a = a * b;
    }
    else if (wybor == "/")
    {
        a = a / b;
    }
    else
    {
        cout << "Nie ma takiego działania w tym programie";
        return;
    }

    cout << a;
        
}
