#include <iostream>


bool isEvenBitwise(int number) {

    return (number & 1) == 0;
}


bool isEvenModulo(int number) {

    return number % 2 == 0;
}


bool isEvenConditional(int number) {

    return number % 2 ? 0 : 1;
}

int main() {
    int number;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;


    if (isEvenBitwise(number)) {
        std::cout << "Liczba jest parzysta (operacja bitowa)." << std::endl;
    } else {
        std::cout << "Liczba jest nieparzysta (operacja bitowa)." << std::endl;
    }


    if (isEvenModulo(number)) {
        std::cout << "Liczba jest parzysta (operator modulo)." << std::endl;
    } else {
        std::cout << "Liczba jest nieparzysta (operator modulo)." << std::endl;
    }

    if (isEvenConditional(number)) {
        std::cout << "Liczba jest parzysta (operator warunkowy)." << std::endl;
    } else {
        std::cout << "Liczba jest nieparzysta (operator warunkowy)." << std::endl;
    }

    return 0;
}
