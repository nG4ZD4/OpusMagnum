// takie troche MENU w aplikacji 
//instrukcja SWITCH sluzy do podejmowania wielowariantowych decyzji Dzialanie:
// 1. najpierw obliczane jest wyrazenie stalymi z etykiet case
// 2. jesli jego wartosc sie zgadza z wartoscoa wyrazenia stalego podana obok jednego ze zlow kluczowych CASE, wowczas wykonywane sa instrukacje
// 3. wykonywanie ich konczy sie po napotkaniu instrukcji BREAK, powoduje to wyskok z intr. SWITCH, czyli jakby wyjscie poza jej dolna klamre

#include <iostream>
using namespace std;

int main()
{
    cout <<"Ktory podzespol sprawdzic? \n nr 10 -> SILNIK \n nr 35 -> STERY \n nr 28 -> RADAR \n" 
    << "Podaj numer : " << endl;

    int numer;
    cin >> numer;

    switch (numer)
    {
        case 10:
            cout << "sprawdzam SILNIK" << endl;
            break;
        case 35:
            cout << "sprawdzam STERY" << endl;
            break;
        case 28:
            cout << "sprawdzam RADAR" << endl;
            break;
        default:
            cout << "Numer " << numer << " nie posiada przypisanej instrukcji" << endl;
    }
    return 0;
}