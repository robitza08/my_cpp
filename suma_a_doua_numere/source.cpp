#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int limita = 1000000000;
    cin >> a >> b;

    if (a < limita && b < limita) {
        int c = a + b;  
        cout << c;
    }

   return 0;
}