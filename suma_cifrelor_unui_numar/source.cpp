#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Introduceti un numar natural de la tastatura: ";
    cin >> n;
    cout << "Cifrele numarului sunt: ";
    int suma=0;

    while (n != 0) // cat timp n este nenul - mai are cifre
    {
        int r = n % 10; //determinam ultima cifra a lui n
        suma = suma + r;
        // n /= 10;    //  eliminam ultima cifra (trunchiem numarul)
        n = n / 10;
        if (n != 0) {
           cout << r << ", "; // prelucram ultima cifra
        } else {
           cout << r; 
        } 
    }
    cout << "\nSuma cifrelor este: " << suma;   
    return 0;
}