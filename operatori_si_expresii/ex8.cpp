#include <iostream>
using namespace std;
int main()
{
    int m,n; 
    cin >> m >> n;
    int exp1 = (m-n)%2==0;
    int exp2 = (m+n)%2==0;
    int exp3 = m%2+n%2==0;
    int exp4 = m%2-n%2==0;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}