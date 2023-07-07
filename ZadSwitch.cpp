#include <iostream>
#include <string>

using namespace std;

int main() {
    string slowo;
    int numer;

    cout << "Podaj slowo:";
    cin >> slowo;

    if (slowo == "czesc") {
        numer = 1;
    } else if (slowo == "hej") {
        numer = 0;
    } else {
        cout << "Nie rozpoznaje danego slowa" << endl;
        return 0;
    }

    switch (numer) {
        case 1:
            cout << "slowo to czesc" << endl;
            break;
        case 0:
            cout << "slowo to hej" << endl;
            break;
        default:
            cout << "Niepoprawna wartosc numer" << endl;
            break;
    }

    return 0;
}