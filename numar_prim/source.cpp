#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Introduceti un numar natural de la tastatura: ";
    cin >> n;

    int numarDivizori = 0;
    for(int d = 1; d <= n; d++) {
        if(n % d == 0) {
            numarDivizori++;
        }
    }
    if(numarDivizori == 2) {
        cout << "Numarul este prim.";
    } else {
        cout << "Numarul nu este prim.";
    }
    return 0;
}