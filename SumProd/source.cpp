#include <iostream>

using namespace std;

int main()
{ 
    int a,b,c;
    cin >> a >> b >> c;
    int val1=a*b+c;
    int val2=a*c+b;
    int val3=b*c+a;
    int max=val1;
    if (max < val2)
    max=val2;
    if (max < val3)
    max=val3;
    cout << max;
    return 0;
}
