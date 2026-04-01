#include <iostream>
using namespace std;

int main(void) {
    int playerPos = 5;

    int turnos;
    cin >> turnos;

    int bombas[turnos];
    for (int i = 0; i < turnos; i++) cin >> bombas[i];

    int action;
    for (int i = 0; i < turnos; i++) {
        if (playerPos == bombas[i]) {
            cout << "Game Over\n";
            return 0;
        }

        cin >> action;
        if (action == 0) {
            for (int j = i; j < turnos; j++) {
                if (bombas[j] == playerPos) {
                    bombas[j] = -1;
                    break;
                } 
            }
        }

        int next = playerPos + action;
        playerPos += next >= 0 && next <= 10 ? action : 0;
    }

    cout << playerPos << '\n';
    return 0;
}
