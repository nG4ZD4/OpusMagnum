#include <iostream>
using namespace std;

long potega (int stopien, long liczba);

int main()
{
    cout << "Program na obliczanie poteg liczb calkowitych z zadanego przedzialu\n"
            "Podaj poczatek przedzialu: ";
    int poczatek;
    cin >> poczatek;

    cout << "Podaj koniec przedzialu: ";
    int koniec;
    cin >> koniec;

    //petla drukujaca wyniki z danego przedzialu

    for (int i = poczatek; i <= koniec; ++i)
    {
        cout << i << " do kwadratu = " << potega (2,i) << ", a do szescianu = " << potega (3,i) << endl;
    }

    auto tesa = potega (35, 3);
    cout << "W obiekcie tesa jest wartosc: " << tesa << endl;
    cout << "rozmiar [tesa]: " << sizeof(tesa) << ",a rozmiar [long]: " << sizeof(long) << endl;
}

//---------------------------------------------------------------------------------------------------------------------------
long potega(int stopien,long liczba)
{
    long wynik = liczba;

    for (int s = 1; s < stopien; ++s)
    {
        wynik = wynik * liczba;                                    // wynik *= liczba
    }
    return wynik;
}
