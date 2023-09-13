#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout <<"** Acest program face suma a doua numere introduse de la tastatura si afiseaza ultima cifra a sumei *\n\n";
    cout <<"Scrieti doua numere intregi separate prin spatiu: ";

    cin >> x >> y;

    int c=a+b;
    int d=c%10;
    
    cout << "Valoarea lui a este:" << a << '\n';
    cout << "Valoarea lui b este:" << b << '\n';
    cout << "Suma numerelor este:" << c << '\n';
    cout << "Ultima cifra a sumei numerelor este:" << d << '\n';
    
    return 0;
}