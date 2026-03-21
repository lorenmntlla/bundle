#include <iostream>
#include <cstdlib>

int main(void) {
    int games;
    std::cin >> games;

    int carDoor;
    int openDoor;
    int playerPick;
    int playerWins = 0;
    for (int index = 0; index < games; index++) {
        playerPick = 1;
        std::cin >> carDoor;

        do
            openDoor = (std::rand() % 3) + 1;
        while (openDoor == playerPick || openDoor == carDoor);

        openDoor == 2 ? playerPick = 3 : playerPick = 2;

        if (playerPick == carDoor) playerWins++;
    }

    std::cout << playerWins << '\n';
    return EXIT_SUCCESS;
}
