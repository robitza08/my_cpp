#include <iostream>

using namespace std;

int main()
{
    int n,x=1,i;
    cin >> n;
    long long p=1; 
    for (i=1; i<=n; i++) {
        p = p * x;
        x = x + 2;
    }
    
    cout << p;

    return 0;
}