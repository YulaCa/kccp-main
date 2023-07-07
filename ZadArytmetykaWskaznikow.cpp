#include <iostream>
using namespace std;

int main() {
    float liczba = 3;
    float* p = &liczba;

    cout << "Wartosc poczatkowa: " << *p << endl;

    p++;
    cout << "Po p++: " << *p << endl;

    ++p;
    cout << "Po ++p: " << *p << endl;

    ++*p;
    cout << "Po ++*p: " << *p << endl;

    ++(*p);
    cout << "Po ++(*p): " << *p << endl;

    ++*(p);
    cout << "Po ++*(p): " << *p << endl;

    (*p)++;
    cout << "Po (*p)++: " << *p << endl;

    (*(p))++;
    cout << "Po (*(p))++: " << *p << endl;

    (*++p)++;
    cout << "Po (*++p)++: " << *p << endl;

    (*(++p))++;
    cout << "Po (*(++p))++: " << *p << endl;

    cout << "\n=====================\n" << endl;

    int a;
    int b;
    int c;
    float x;
    int *wsk_int;

    a = b = c = 0;
    cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //1

    b = 10;
    cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //2


    wsk_int = &c;
    *wsk_int = 20;
    cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //3


    wsk_int = &b;
    *(wsk_int) = 30;
    cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //4


    *(&a) = 40;
    cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //5

    *(&c - 1) = 50;
    cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //6

    *( (int*)&x - 1) = 60;
    cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //7


    *(int*)(&x - 2) = 70;
    cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //8

    *((int*)&wsk_int - 4) = 80;
    cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //9

    wsk_int = &b;
    *(wsk_int) = 90;
    cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl; //10




    return 0;
}
