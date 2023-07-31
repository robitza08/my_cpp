#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout <<"**Acest program afiseaza cel mai mare numar dintre doua numere introduse de la tastatura**\n";
    cout <<"Introduceti doua numere intregi separate prin spatiu:";
    cin >> a >> b;
    if (a > b) {
        cout << "Cel mai mare numar este:" << a;
    } else if(a < b) {
        cout << "Cel mai mare numar este:" << b;
    } else {
        cout << "Numerele sunt egale";
    }

    return 0;
}