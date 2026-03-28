#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int numItens, numCompras;
    cin >> numItens >> numCompras;

    int itens[numItens];

    for (int i = 0; i < numItens; i++) cin >> itens[i];

    int total = 0;
    for (int compra, i = 0; i < numCompras; i++) { 
        cin >> compra;
        total += itens[compra - 1];
    }

    cout << total << '\n';
}
