#include <iostream>
using namespace std;

//*********************************************************************************************************************
void elementy_tab (int tab[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podaj (" << i+1 << ") element tablicy:\t";
        cin >> tab[i];
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void wyswietlenie (int tab[], int rozmiar)
{
    cout << "wyswietlenie elementow tablicy:\t";
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << " ";
    }
}
//*******************************************************************************************************************
int main()
{
    int n;
    cout << "podaj rozmiar tablicy:\t";
    cin >> n;
    int tablica[n];

    elementy_tab (tablica, n);
    wyswietlenie (tablica, n);

    cout << endl;
}