
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int exp1 = !(n%2);
    int exp2 = n%2!=0;
    int exp3 = !((n+1)%2==0);
    int exp4 = n%2==0;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";
   

    return 0;
}