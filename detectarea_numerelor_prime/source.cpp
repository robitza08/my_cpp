#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Introduceti limita superioara pana la care sa se verifice numerele prime: ";
    cin >> n;
    
    cout << "[";
    int pozitie = 0;
    for (int i = 2; i <= n; i++){
        int numarDivizori = 0;
        for(int d = 1; d <= i; d++) {
            if(i % d == 0) {
                numarDivizori++;
            }
        }
        if(numarDivizori == 2) {
            if (pozitie == 0) {
                cout << i;    
                pozitie++;
            } else {
                cout << ", " << i;    
            }
            
        } 
    }
    cout << "]";
    
    return 0;
}