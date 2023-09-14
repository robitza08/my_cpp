
#include <iostream>
using namespace std;
int main()
{
    int a,b; 
    cin >> a >> b;
    int exp1 = (a+b+1)%2;
    int exp2 = !(a%2) || b%2;
    int exp3 = !(!(a%2) || b%2);
    int exp4 = a%2 && b%2;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";
   

    return 0;
}