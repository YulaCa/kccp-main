#include <iostream>

using namespace std;



extern "C" double dodaj(double a, double b) {
    return a + b;
}

extern "C" double odejmij(double a, double b) {
    return a - b;
}

double pomnoz(double a, double b){
    return a*b;
}

double podziel(double a, double b){
    return a/b;

}

bool czyWieksze(double a, double b){
    if(a>b){
        cout<<"wieksze"<<endl;
    }
    else{
        cout<<"mniejsze"<<endl;
    }
    return a>b;
}

int main()
{
    double a = 3;
    double b = 4;
    cout<<"Dodaj:  "<< dodaj(a,b)<<endl;
    cout<<"============================"<<endl;
    cout<<"Odejmij:  "<<odejmij(a,b)<<endl;
    cout<<"============================"<<endl;
    cout<<"Pomnoz:  "<<pomnoz(a,b)<<endl;
    cout<<"============================"<<endl;
    cout<<"Podziel:  "<<podziel(a,b)<<endl;
    cout<<"============================"<<endl;
    cout<<czyWieksze(a,b)<<endl;
    cout<<"============================"<<endl;
    cout<<czyWieksze(b,a)<<endl;

    return 0;
}