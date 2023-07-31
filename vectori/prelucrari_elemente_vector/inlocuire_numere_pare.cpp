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
        cin >> a; // se introduce un element de la tastatura
        v.push_back(a); //se adauga elementul introdus de la tastatuda in vector
    }
    
    cout << "Vectorul introdus este: \n";
	
    cout << "[";
    for (int j=0; j < v.size(); j++) { // pentru fiecare element din vector
        if (j<v.size()-1){ // daca nu este nu este ultimul element
            cout << v[j] << ", "; // afisez element si virgula dupa el
        } else { // altfel, daca este ultimul element
            cout << v[j]; // afisez doar elementul
        }
    }
    cout << "]\n";
    
    for(int i=0; i < v.size(); i++) { // pentru fiecare element din vector
        if (v[i]%2==0) { // daca elementul este par
            v[i] = 0; // inlocuim elementul cu 0            
        } else { // altfel, daca elementul este impar
            v[i] = 1; // inlocuim elementul cu 1
        }
    } 

    cout << "Vectorul modificat este: \n";
	
    cout << "[";
    for (int j=0; j < v.size(); j++) { // la fel ca mai sus
        if (j<v.size()-1){
            cout << v[j] << ", ";
        } else {
            cout << v[j];
        }
    }
    cout << "]\n";

    return 0;
}