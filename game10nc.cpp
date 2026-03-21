#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, d, a;

    cin >> l >> d >> a;

    cout << ((d + l) - a) % l << '\n';

    return 0;
}
