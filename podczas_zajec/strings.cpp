#include <iostream>
#include <string>
using namespace std;

void stringManipulation(string example, int at = 3, string zmiana = "zmieniony tekst"){

    cout << example.empty()<< endl;
    cout << "------------------"<< endl;
    cout << example.size()<< endl;
    cout << "------------------"<< endl;
    cout << example.length()<< endl;
    cout << "------------------"<< endl;
    cout << example.at(at)<< endl;
    cout << "------------------"<< endl;
    cout << example.erase(at)<< endl;
    cout << "------------------"<< endl;
    cout << example.find("l") << endl;
    cout << "------------------"<< endl;
    cout << example.append("dodana wartosc")<< endl;
    cout << "------------------"<< endl;
    cout << "Example: "+ example + " Zmiana: " + zmiana << endl;
    example.swap(zmiana);
    cout << "Example: "+ example + " Zmiana: " + zmiana << endl;
    cout << "------------------"<< endl;
    cout << example.substr(4)<< endl;
    cout << "------------------"<< endl;
    cout << "String przed funckja clear: " + example << endl;
    example.clear();
    cout << "String po funkcji clear: " + example << endl;
};

int main() {

    string tekst = "lorem ipsum lorem ipsum lorem ipsum ";
    stringManipulation(tekst);
}
