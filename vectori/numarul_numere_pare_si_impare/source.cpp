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
    
    int numere_pare=0;
    int numere_impare=0;
    for(int i=0; i < v.size(); i++) { 
        if (v[i]%2==0) { 
            numere_pare++;    
        } else {
            numere_impare++;
        }
    } 
    cout << "Numarul numerelor pare este: " << numere_pare;
    cout << "\nNumarul numerelor impare este: " << numere_impare;
    
    return 0;
}