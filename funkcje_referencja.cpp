#include <iostream>
using namespace std;

void zero (int wartosc, int &referencja);                           // dodanie znaku ampersant & odwolujemy sie do adresu komorki

int main ()
{
    int a = 44, b = 77;
    cout << "Przed wywolaniem funkcji zero a = " << a << ", b = " << b << endl;

    zero(a,b);                                      //odwolanie do funcji zero, gdzie b od teraz przujmuje wartosc = int referencja

    cout << "Po powrocie z funkcji zero a = " << a << ", b = " << b << endl;
}

//------------------------------------------------------------------------------------------------------------------
void zero (int wartosc, int &referencja)
{
    cout << "\tW funkcji zero przed zerowaniem \n"
         << "\twartosc = " << wartosc << ", referencja = " << referencja << endl;

    wartosc = 0; referencja = 0;

    cout << "\tW funkcji zero po zerowaniu \n"
         << "\twartosc = " << wartosc << ", referencja = " << referencja << endl;
}