#include <iostream>
using namespace std;

int main()
{
    constexpr int start = 1;
    constexpr int powrot = 42;

    int co_robic;
    cout << "wybierz 1/42: ";
    cin >> co_robic;

    switch (co_robic)
    {
    case start:                 //zeby to wyswietlic wpisujesz liczbe przypisana - NIE SLOWO 
        cout << "START";
        break;
    
    case powrot:
        cout << "Powrot";
        break;

    }

}