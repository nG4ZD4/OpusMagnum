#include <iostream>
using namespace std;

int main ()
{
    int zmienna = 8, druga = 4;     //inny zapis:
    int *wskaznik;                  // int *wskaznik = &zmienna
    wskaznik = &zmienna;

    // prosty wypis na ekranie
    cout << "zmienna = " << zmienna
         << "\na odczytana przez wskaznik = " << *wskaznik << endl;
    
    zmienna = 10;
     cout << "zmienna = " << zmienna
         << "\na odczytana przez wskaznik = " << *wskaznik << endl;
   
    *wskaznik = 200;
     cout << "zmienna = " << zmienna
         << "\na odczytana przez wskaznik = " << *wskaznik << endl;
   
    wskaznik = &druga;
     cout << "zmienna = " << zmienna
         << "\na odczytana przez wskaznik = " << *wskaznik << endl;
   
   return 0;
}