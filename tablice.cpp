#include <iostream>
using namespace std;

void potrojenie (int ile, long t[])
{
    for (int i = 0; i < ile; ++i)
    {
        t[i] *= 3;
    }
}
//******************************************************************************************************

int main ()
{
    constexpr int  rozmiar = 8192;
    long widmo[rozmiar];

    for (int i = 0; i < rozmiar; ++i)
    {
        widmo[i] = i;                       // wypisanie wartosci poczatkowej danego elementu 

        if (i < 6)                          // pokazanie pierwszych szesciu na ekranie
        {
            cout << "widmo [" << i << "] = " << widmo[i] << endl;
        }
    }
    
    // wywolanie funkcji potrojenie
    potrojenie(rozmiar, widmo);

    cout << "Po wywolaniu funkcji potrojenie \n";
    for (int i = 0; i < 4; ++i)
    {
        cout << "widmo [" << i << "] = " << widmo [i] << endl;
    }
}