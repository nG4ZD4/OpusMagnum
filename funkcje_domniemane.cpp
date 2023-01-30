#include <iostream>
using namespace std;

double cels_to_fahr(double stopnie)
{
        stopnie = (stopnie * 9/5) + 32;
        return stopnie;
}

void temperatura(double stopnie, int skala = 0)
{
    cels_to_fahr(stopnie);

    cout << "\nTemperatura komory: ";
    switch (skala)
    {
        case 0:
            cout << stopnie << " C\n";
            break;
        case 1:
            cout << (stopnie + 273) << " K\n";
            break;
        case 2:
            cout << cels_to_fahr(stopnie) << " F\n";
            break;
        default:
            cout << "podano zla skale do przeliczenia\n";
            break;
    }
    cout << endl;
}
//---------------------------------------------------------------------------------------------------------------------------
int main()
{
    double temp;
    int przelicz;

        cout << "Podaj zmierzona temperature:\t";
    cin >> temp;
    cout << "\n0 \t dla \t Celciusz" << endl
         << "1 \t dla \t Kelwin" << endl
         << "2 \t dla \t Fahrenheit" << endl
         << "Podaj skale do wyliczenia:\t";
    cin >> przelicz;

    temperatura(temp, przelicz);
    cels_to_fahr(temp);
    
}