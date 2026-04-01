#include <bits/stdc++.h>
using namespace std;

int valorItem(int item) {
    switch (item) {
        case 1: // alface
            return 1;
        case 2: // tomate
            return 2;
        case 3: // carne
            return 5;
        case 4: // queijo
            return 4;
        case 5: // pão
            return 3;
    }
    
    return 0;
}

int main(void) {
    int n;
    cin >> n;
    int compras[n];

    for (int i = 0; i < n; i++) cin >> compras[i];

    int total = 0;
    for (int i = 0; i < n; i++) total += valorItem(compras[i]);

    cout << total << '\n';
}
