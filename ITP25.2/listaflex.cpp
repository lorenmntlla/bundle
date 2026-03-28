#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int numItens, numCompras;
    cin >> numItens >> numCompras;

    int itens[numItens];
    int compras[numCompras];

    for (int i = 0; i < numItens; i++) cin >> itens[i];
    for (int i = 0; i < numCompras; i++) cin >> compras[i];

    int total = 0;
    for (int i = 0; i < numCompras; i++) total += itens[compras[i] - 1];

    cout << total << '\n';
}
