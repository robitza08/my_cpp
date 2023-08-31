#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Introduceti un numar natural de la tastatura: ";
    cin >> n;
    cout << "Cifrele numarului sunt: ";
    while (n != 0) // cat timp n este nenul - mai are cifre
    {
        int r = n % 10; //determinam ultima cifra a lui n
        
        // n /= 10;    //  eliminam ultima cifra (trunchiem numarul)
        n = n / 10;
        if (n != 0) {
           cout << r << ", "; // prelucram ultima cifra
        } else {
           cout << r; 
        }
        
    }
    return 0;
}