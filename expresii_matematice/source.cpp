
#include <iostream>
using namespace std;
int main()
{
    int x, y; 
    cin >> x >> y;
    int exp1 = !(x*(y-5)<=0);
    int exp2 = x*(y-5)>=0;
    int exp3 = x*y-5!=0;
    int exp4 = x*(y-5)!=0;

    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";


    int a, b; 
    cin >> a >> b;
    // exp1 = ((a>3) || (a<15)) && (a!=b) ;
    // exp2 = !((a<=3) || (a>=15)) || (a!=b);
    // exp3 = ((a>3) || (a<15)) && (a==b);
    // exp4 = !(a<3 || a>15) && (a!=b);

    int exp_baza = !((a<5) && (b>7));
    exp1 = !(a<5) || !(b>7);
    exp2 = !(a>=5) && !(b<=7);
    exp3 = (a>=5)&&(b<=7);
    exp4 = !(a<5) && !(b>7);

    cout << exp1 << "\n";
    cout << exp1 << "\n";
    cout << exp2 << "\n";
    cout << exp3 << "\n";
    cout << exp4 << "\n";

    return 0;
}