#include <iostream>
using namespace std;
int main()
{
    int x,y; 
    cin >> x >> y;
    int exp1 = (x+y)%2==0 && (x-y)%2==0;
    int exp2 = x%2==y%2;
    int exp3 = (x-y)/2==0;
    int exp4 = x%2==0 && (y+1)%2!=0;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}