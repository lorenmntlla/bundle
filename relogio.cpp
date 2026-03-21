#include <bits/stdc++.h>

using namespace std;

int main() {
  int r, f, c;

  cin >> r >> f >> c;

  cout << (f > 3 * r || c < 95 ? "diminuir" : f < 2 * r && c > 97 ? "aumentar" : "manter") << '\n';
}
