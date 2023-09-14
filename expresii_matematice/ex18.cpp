
#include <iostream>
using namespace std;
int main()
{
    int x; 
    cin >> x;
    int exp1 = (x<=-35) || (x>=-20);
    int exp2 = (x<=-35) || (x>-20);
    int exp3 = (x<=-35) && (x>20);
    int exp4 = (x<-35) || (x>-20);

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}