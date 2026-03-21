#include <iostream>

int main(void) {
    int firstNumber, secondNumber, thirdNumber, fourthNumber;

    std::cin >> firstNumber;
    std::cin >> secondNumber;
    std::cin >> thirdNumber;
    std::cin >> fourthNumber;

    if (firstNumber == 8 || firstNumber == 9 &&
        thirdNumber == secondNumber &&
        fourthNumber == 8 || fourthNumber == 9) {
                std::cout << "ignore\n";
                return 0;
            }

    std::cout << "answer\n";
    return 0;
}
