#include <iostream>
#include "../include/ZadKcpp.h"
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;


//=======================================================
void ZadKcpp::task1() {
    int number;
    cout << "Podaj liczbe: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Liczba jest parzysta." << endl;
        cout << "===============================" << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
        cout << "===============================" << endl;
    }
}
//=======================================================


int binaryToDecimal(int binary) {
    int decimal = 0;
    int exponent = 0;

    while (binary != 0) {
        int remainder = binary % 10;
        decimal += remainder * pow(2, exponent);
        binary /= 10;
        exponent++;
    }

    return decimal;
}

void ZadKcpp::task2() {

    int binaryNumber;
    cout << "Podaj liczbe binarna: ";
    cin >> binaryNumber;
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Liczba dziesietna: " << decimalNumber << endl;
}
//=======================================================


vector<int> decToBin(int decimal) {
    vector<int> binary;

    while (decimal > 0) {
        binary.push_back(decimal % 2);
        decimal /= 2;
    }

    // Odwróć wektor, aby uzyskać prawidłową reprezentację binarną
    reverse(binary.begin(), binary.end());

    return binary;
}

void ZadKcpp::task3() {
    int decimal;

    cout << "Podaj liczbe dziesiętna: ";
    cin >> decimal;

    vector<int> binary = decToBin(decimal);

    cout << "Liczba binarna: ";
    for (int i = 0; i < binary.size(); ++i) {
        cout << binary[i];
    }
    cout << endl;
}

//=======================================================

int* kopia_tablicy(int tablica[], int rozmiar) {
    int* kopia = new int[rozmiar];
    for (int i = 0; i < rozmiar; i++) {
        kopia[i] = tablica[i];
    }
    return kopia;
}


void ZadKcpp::task4() {
    int OG[] = {1, 2, 3, 4, 5};
    int size = sizeof(OG)/sizeof(OG[0]);

    int* skopiowana_tablica = kopia_tablicy(OG, size);

    for (int i = 0; i < size; i++) {
        std::cout << skopiowana_tablica[i] << " ";
    }

    delete[] skopiowana_tablica;
}


//=======================================================
void ZadKcpp::task5() {
    float wynik1 = 3.14159;
    float wynik2 = 2.71828;
    float average = (wynik1 + wynik2) / 2;

    cout << "==================================================" << endl;
    cout << "Wynik naszego dzialania: " << setprecision(5) << fixed << wynik1 << " jest niepoprawny ale:" << endl;
    cout << setw(10) << setfill(' ') << "output: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(7) << setfill(' ') << wynik2 << endl;
    cout << setw(10) << setfill('-') << "";
    cout << "    " << setw(10) << setfill('-') << "" << endl;
    cout << setprecision(4) << fixed;
    cout << "output1: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(9) << setfill(' ') << wynik2 << endl;
    cout << "output2: " << setw(8) << setfill(' ') << wynik1;
    cout << "    T: " << setw(10) << setfill(' ') << wynik2 << endl;
    cout << "---------------------------------" << endl;
    cout << "average: " << setw(8) << setfill(' ') << average;
    cout << "    T: " << setw(10) << setfill(' ') << wynik2 << endl;
    cout << "==================================================" << endl;
}
