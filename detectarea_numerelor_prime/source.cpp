#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Introduceti limita superioara pana la care sa se verifice numerele prime: ";
    cin >> n;

    for (int i = 2; i <= n; i++){
        int numarDivizori = 0;
        for(int d = 1; d <= i; d++) {
            if(i % d == 0) {
                numarDivizori++;
            }
        }
        if(numarDivizori == 2) {
            cout << i << ", ";
        } 
    }
 
    
    return 0;
}