#include <iostream>

class B;  // Deklaracja wstępna klasy B

class A {
private:
    int privateMember;

public:
    A() : privateMember(0) {}

    friend class B;  // Klasa B jest zaprzyjaźniona z klasą A

    void display() {
        std::cout << "privateMember: " << privateMember << std::endl;
    }
};

class B {
private:
    int privateMember;

public:
    B() : privateMember(10) {}

    friend class A;  // Klasa A jest zaprzyjaźniona z klasą B

    void display() {
        std::cout << "privateMember: " << privateMember << std::endl;
    }
};

int main() {
    A a;
    B b;

    a.display();  // Dostęp do prywatnego składnika klasy A przez klasę B
    b.display();  // Dostęp do prywatnego składnika klasy B przez klasę A

    return 0;
}
