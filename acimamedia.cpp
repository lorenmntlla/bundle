#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    int mean = sum / n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mean) cout << arr[i] << '\n';
    } 

    return 0;
}
