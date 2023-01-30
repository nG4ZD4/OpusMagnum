#include <iostream>
using namespace std;

int main ()
{
    int kraj;
    cout << "Gdzie lecimy?? Podaj numer : \n nr 1 -> Australia \n nr 2 -> California \n nr 3 -> Grenlandia \n nr 4 -> Japonia " << endl;
    cin >> kraj;

    switch(kraj)
    {
        case 1:
            cout << "Uciekamy do Australii\n";
            break;
        case 2: 
            cout << "Uciekamy do Californii\n";
            break;
        case 3:
            cout << "Uciekamy do Grenlandii\n";
            break;
        default:
            cout << "PWR nie daje nam uciec\n";
            break;
    }

    cout << "Mamy nadzieje ze udalo sie uciec, jesli nie to przepraszamy za niezdana sesje ";
    return 0;
}