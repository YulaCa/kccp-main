#include <iostream>
#include "../include/ZadKcpp.h"

int main() {
    ZadKcpp zad;
    int choice;

    while (true) {
        std::cout << "===============================" << std::endl;
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Zadanie 1 - Sprawdza czy podana liczba przez uzytkownika jest parzysta. (Zad 4.4)" << std::endl;
        std::cout << "2. Zadanie 2 - Przelicza liczbe binarna na decymalna (Zad 3.6)" << std::endl;
        std::cout << "3. Zadanie 3 - Przelicza liczbe decymalna na binarna (Zad 3.6)" << std::endl;
        std::cout << "4. Zadanie 4 - Program przekazujacy kopie tablicy (Zad 2.3)" << std::endl;
        std::cout << "5. Zadanie 5 - Program z przykladami manipulacji strumieniem cout (4.1)" << std::endl;
        std::cout << "0. Wyjscie" << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "Wybierz zadanie: ";
        std::cin >> choice;
        std::cout << "===============================" << std::endl;

        switch (choice) {
            case 0:
                return 0;
            case 1:
                zad.task1();
                break;
            case 2:
                zad.task2();
                break;
            case 3:
                zad.task3();
                break;
            case 4:
                zad.task4();
                break;
            case 5:
                zad.task5();
                break;
            default:
                std::cout << "Nieprawidlowy wybor, sprobuj ponownie" << std::endl;
                break;
        }

        std::cout << std::endl;
    }
}
