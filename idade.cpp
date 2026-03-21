#include <bits/stdc++.h>

using namespace std;

void shellsort(int *v, int n) {
    int gap, i, j, tmp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                tmp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = tmp;
            }
}

int main() {
    int age[3];

    cin >> age[0] >> age[1] >> age[2];
    shellsort(age, 3);

    printf("%i\n", age[1]);
}
