#include <iostream>
using namespace std;
int main()
{
    int x; 
    cin >> x;
    int exp1 = !(x<-21 && x>21 && x>-2 || x<2);
    int exp2 = !(x<-21 || x>-2) || !(x<2 || x>21);
    int exp3 = 	x>=-21 && x<=-2 && x>=2 && x<=21;
    int exp4 = x>=-21 || x<=-2 || x>=2 || x<=21;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    return 0;
}