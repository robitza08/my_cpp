#include <iostream>

using namespace std;

int main()
{ 
    int n,a,b,c;
    cin >> n;
    a=n/100;
    b=(n%100)/10;
    c=n%10;

    if (a <= b && b <= c)
        cout << a << " " << b << " " << c;
    else if (b <= a && a <= c)
        cout << b << " " << a << " " << c;
    else if (c <= a && a <= b)           
        cout << c << " " << a << " " << b;
    else if (a <= c && c <= b)
        cout << a << " " << c << " " << b;
    else if (b <= c && c <= a)
        cout << b << " " << c << " " << a;
    else if (c <= b && b <= a)
        cout << c << " " << b << " " << a;
    return 0;
}
