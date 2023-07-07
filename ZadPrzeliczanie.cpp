#include <iostream>
#include <vector>
#include <algorithm>

int binToDec(const std::vector<int>& binary) {
    int decimal = 0;
    int base = 1;

    for (int i = binary.size() - 1; i >= 0; i--) {
        decimal += binary[i] * base;
        base *= 2;
    }

    return decimal;
}

std::vector<int> decToBin(int decimal) {
    std::vector<int> binary;

    while (decimal > 0) {
        binary.push_back(decimal % 2);
        decimal /= 2;
    }

    // Odwrócenie kolejności bitów
    std::reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    int choice;
    std::cout << "Wybierz opcje:\n";
    std::cout << "1. DEC to BIN\n";
    std::cout << "2. BIN to DEC\n";
    std::cin >> choice;

    if (choice == 1) {
        int decimal;
        std::cout << "Podaj liczbe dziesietne: ";
        std::cin >> decimal;

        std::vector<int> binary = decToBin(decimal);

        std::cout << "Liczba binarna: ";
        for (int bit : binary) {
            std::cout << bit;
        }
    } else if (choice == 2) {
        std::string binaryString;
        std::cout << "Podaj liczbe binarna: ";
        std::cin >> binaryString;

        std::vector<int> binary;
        for (char bit : binaryString) {
            binary.push_back(bit - '0');
        }

        int decimal = binToDec(binary);

        std::cout << "Liczba dziesietna: " << decimal;
    } else {
        std::cout << "Nieprawidlowy wybor.";
    }

    return 0;
}
