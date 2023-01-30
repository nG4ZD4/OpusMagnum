#include <iostream>
using namespace std;

int main ()
{
    int *w;
    int k = 36;
    w = &k;

    cout << "W obiekcie pokazywanym przez wskaznik jest wartosc " << (*w);
    return 0; 
}