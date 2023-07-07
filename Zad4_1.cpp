#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float wynik1 = 3.14159;
    float wynik2 = 2.71828;
    float average = (wynik1 + wynik2) / 2;

    cout << "==================================================" << endl;
    cout << "Wynik naszego działania: " << setprecision(5) << fixed << wynik1 << " jest niepoprawny ale:" << endl;
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

    return 0;
}
