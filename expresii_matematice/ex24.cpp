
#include <iostream>
using namespace std;
int main()
{
    int x; 
    cin >> x;
    int exp1 = (1-x%3)*(2-x%3);
    int exp2 = 3-x%3;
    int exp3 = x%3;
    int exp4 = (1-x%3)+(2-x%3);

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}