#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,suma1,suma2,suma3,max;
    cin >> a >> b >> c;
    
    suma1=a%10+a/10;
    suma2=b%10+b/10;
    suma3=c%10+c/10;
    
    max=suma1;
    
    if(max < suma2) 
        max=suma2;
    
    if(max < suma3)
        max=suma3;
    
    if(suma1==max)
        cout << a << " ";
    
    if(suma2==max)
        cout << b << " ";
    
    if(suma3==max)
        cout << c << " ";
    
    return 0;
}