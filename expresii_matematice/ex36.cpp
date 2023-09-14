
#include <iostream>
using namespace std;
int main()
{
    int x; 
    cin >> x;
    int exp1 = x==2015 && !(x<2016 && x<2017);
    int exp2 = x==2015 && !(x<2016 || x<2017);
    int exp3 = x==2015 || !(x<2016 && x>2017); // 0
    int exp4 = x==2015 || !(x<2016 || x>2017); 

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    

    return 0;
}