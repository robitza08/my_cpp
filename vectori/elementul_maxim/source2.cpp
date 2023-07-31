#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 
	cout << "Introduceti dimensiunea (numarul de elemente) vectorului apoi apasati enter: ";
    cin >> n;
	
    int a;
    vector<int> v;
	
    cout << "Introduceti fiecare element al vectorului si apasati enter dupa fiecare element introdus \n";
	
    for (int i=0; i <= n - 1; i++) {
        cin >> a;
        v.push_back(a);
    }
	
	cout << "Vectorul introdus este: \n";
	
	cout << "[";
    for (int j=0; j < v.size(); j++) {
        if (j<v.size()-1){
            cout << v[j] << ", ";
        } else {
            cout << v[j];
        }
    }
    cout << "]";
	
	
	cout << "\n[";
    for (int j=0; j < v.size(); j++) {
        if (j<v.size()-1){
            cout << v[j] << ", ";
        } else {
            cout << v[j];
        }
        j++;
    }
    cout << "]\n";
    
    for (int j=0; j < v.size(); j++) {
        cout << v[j] << "\n";
    }
    
    
    int max=0;
    for (int j=0; j < v.size(); j++) {
        if (v[j] > max) {
            max=v[j];
        }
    }
    
    cout << "\nCel mai mare element al vectorului este: " << max;
    
    
    return 0;
}