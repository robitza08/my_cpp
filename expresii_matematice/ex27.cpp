
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int exp1 = (n%10==0) || (n%5!=0);
    int exp2 = ((n%2!=1) && (n%5!=0));
    int exp3 = (n%2==0) && (n%5==0);
    int exp4 = (n%10==0) && (n%2==0);

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}