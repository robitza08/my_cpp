#include <iostream>
using namespace std;
int main()
{
    int x; 
    cin >> x;
    int exp1 = x/10+4+x%10;
    int exp2 = (x%10*10+4)*10+x/10;
    int exp3 = (x/10+4)*10+x%10;
    int exp4 = (x/10*10+4)*10+x%10;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    return 0;
}