// Petla for przyjmuje forme:  for (instrukcja inicjalizujca ; wyrazenie warunkowe ; instrukcja kroku)


#include <iostream>
using namespace std;

int main()
{
    int ile;

    cout << "Ilu jest pasazerkow na pokladzie?" << endl;
    cin >> ile;

    for (int i = 0; i <= ile; i++)
    {
        cout << "Pasazer nr. " << i << " prosze zapiac pas!" << endl;
    }

    cout << "\nWszytskie pasy zapiete, start\n";
    return 0;
}