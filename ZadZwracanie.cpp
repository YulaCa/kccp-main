#include <iostream>

int dodawanie(int a, int b){
    int sum = a + b;
    return sum;
}
int& dodawanie_referencja(int a, int b){
    int sum = a + b;
    return sum;
}

int * dodawanie_pointer(int a, int b){
    int* sum = new int;
    *sum = a + b;
    return sum;
}

int* wypelnijTablice(){
    int tablica[10];
    srand(time(NULL));
    for(int i=0; i<10; i++){
        tablica[i] = rand() % 100;
    }
    return tablica;
}

int main() {
    printf("Zwracanie przez wartosc: \n");
    std::cout << dodawanie(3,2) << std::endl;
    printf("\n");

    printf("Zwracanie przez referencje: \n");
    std::cout << dodawanie_referencja(3,2) << std::endl;
    printf("\n");

    printf("Zwracanie przez wskaźnik: \n");
    std::cout << dodawanie(3,2) << std::endl;
    printf("\n");

    printf("Zwracanie przez tablice (pointer na pierwszy element) : \n");
    std::cout << wypelnijTablice() << std::endl;
    return 0;
}
