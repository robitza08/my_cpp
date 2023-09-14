
#include <iostream>
using namespace std;
int main()
{
    int x = -5; 
    int y = 0;
    cin >> x;
    int exp1 = (x<=-2) || (x>-1) && !(x>=1) || (x>50);
    int exp2 = (y<=-2) || (y>-1) && !(y>=1) || (y>50);
    // int exp3 = (z<=-2) || (z>-1) && !(z>=1) || (z>50);

    cout << exp1 << "\n";
    cout << exp2 << "\n";
  

    return 0;
}