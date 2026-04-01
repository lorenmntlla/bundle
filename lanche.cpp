#include <iostream>
using namespace std;

int main(void) {
    int sizeReceitas, sizeSeq;
    cin >> sizeReceitas >> sizeSeq;

    int receitas[sizeReceitas];
    for (int i = 0; i < sizeReceitas; i++) cin >> receitas[i];
    
    int seq;
    
    int plates = 0;
    for (int i = 0, j = 0; j < sizeReceitas && i < sizeSeq; i++) {
        cin >> seq;

        j += receitas[j] == seq ? 1 : 0;

        if (j == sizeReceitas) {
            plates++;
            j = 0;
        }
    }

    cout << plates << '\n';
}
