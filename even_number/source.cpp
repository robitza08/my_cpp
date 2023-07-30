#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\n\nPlease insert an integer number from keyboard and press Enter: ";
    cin >> n;
    if (n%2 == 0) {
        cout << "\n\nNmarul este par (This is an even number).\n\n";
    } else {
        cout << "\n\nNumarul este impar (This is an odd number).\n\n";
    }
    return 0;
}