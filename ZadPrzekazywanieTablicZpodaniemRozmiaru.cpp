#include <iostream>

void printArray(int tablica[], int rozmiar_tablicy) {
    for (int i = 0; i < rozmiar_tablicy; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int tablica[5] = {1, 2, 3, 4, 5};
    int rozmiar_tablicy = sizeof(tablica)/sizeof(tablica[0]); //rozmiar tablicy

    std::cout << "Tablica przekazana do fukncji: " << std::endl;
    printArray(tablica, rozmiar_tablicy);

    return 0;
}
