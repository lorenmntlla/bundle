#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, a, o;

    cin >> n >> d >> a;

    o = d >= a ? d - a : (n - a) + d;

    cout << o << '\n';

    return 0;
}
