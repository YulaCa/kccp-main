#include <iostream>

int* kopia_tablicy(int tablica[], int rozmiar) {
    int* kopia = new int[rozmiar];
    for (int i = 0; i < rozmiar; i++) {
        kopia[i] = tablica[i];
    }
    return kopia;
}

int main() {
    int OG[] = {1, 2, 3, 4, 5};
    int size = sizeof(OG)/sizeof(OG[0]);

    int* skopiowana_tablica = kopia_tablicy(OG, size);

    for (int i = 0; i < size; i++) {
        std::cout << skopiowana_tablica[i] << " ";
    }

    delete[] skopiowana_tablica;
    return 0;
}
