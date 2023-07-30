#include <iostream>

using namespace std;

int main(){
    int n , m;
    cout << "Insert two integer numbers separated by space: ";
    cin  >> n >> m;
	cout << "The biggest number is: ";
    if (n > m)
        cout << n;
    else
        cout << m;
    return 0;
}