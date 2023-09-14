
#include <iostream>
using namespace std;
int main()
{
    int a,b,c; 
    cin >> a >> b >> c;
    int exp1 = (a % c!=0) && !(b % c!=0);
    int exp2 = (a % c!=0) || !(b % c!=0);
    int exp3 = !(c % a!=0) && (c % b!=0);
    int exp4 = !((a % c!=0) || !(b % c!=0));

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";
   

    return 0;
}