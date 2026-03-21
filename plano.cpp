#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, n;

    cin >> q >> n;

    int m;
    int o = q;
    for (int i = 0; i < n; i++) {
        cin >> m;
        o += q - m;
    }

    cout << o << '\n';
}
