
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int produs = 1;
    while (n != 0)
    {
        int cifra = n % 10;
        int r = cifra % 2;
        if (r != 0) {
            produs = produs * cifra;
        }
        n = n / 10;
    }
    if (produs == 1) {
        cout << "-1";   
    } else {
        cout << produs;   
    }
    return 0;
}