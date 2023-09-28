#include <iostream>

using namespace std;

int main()
{ 
    int p;
    unsigned long long n10,n20,k,s=0;
    cin >> p >> k;

    if(k % 2 == 0) {
        n10 = k / 2 * 10;
        n20 = (k / 2 - 1) * 20;
        s = p + n10 + n20;
    } else {
        n10 = (k - 1) / 2 * 10;
        n20 = (k - 1) / 2 * 20;
        s = p + n10 + n20;
    }
    cout << s ;

    return 0;
}