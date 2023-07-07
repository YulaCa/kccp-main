#include <iostream>


struct MojaStruktura {
    int liczba;
    float zmiennoprzecinkowa;
    char znak;
};

int main() {
    MojaStruktura obiekt;

    obiekt.liczba = 42;
    obiekt.zmiennoprzecinkowa = 3.14;
    obiekt.znak = 'A';

    std::cout << "Liczba: " << obiekt.liczba << std::endl;
    std::cout << "Zmiennoprzecinkowa: " << obiekt.zmiennoprzecinkowa << std::endl;
    std::cout << "Znak: " << obiekt.znak << std::endl;

    obiekt.liczba = 99;
    obiekt.zmiennoprzecinkowa = 2.718;
    obiekt.znak = 'B';

    std::cout << "==========================" << std::endl;

    std::cout << "Liczba po zmianie: " << obiekt.liczba << std::endl;
    std::cout << "Zmiennoprzecinkowa po zmianie: " << obiekt.zmiennoprzecinkowa << std::endl;
    std::cout << "Znak po zmianie: " << obiekt.znak << std::endl;

    return 0;
}
