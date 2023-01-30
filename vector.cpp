#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    vector<int> serial {9, 4, 7, -6, 2, 7};
    cout << "serial[1] = " << serial[1] << endl;

    int rozmiar = serial.size();
    cout << "Wektor serial ma " << rozmiar << " elementow" << endl;

    for(int i = 0; i < serial.size(); ++i)
    {
        cout << serial[i] << "\t";
    }
    cout << endl;

    int hbo = serial[4] + 500;                      // 2 + 500
    serial[2] = serial[3] * 10;                     // -6 * 10
    cout << "hbo = " << hbo << "\t" << "serial[2] = " << serial[2] << endl;

    cout << "Obecna zawartosc wektora serial: " << endl;
    for (int nr = 0; nr < serial.size(); ++nr)
    {
        cout << "serial[" << nr << "] = " << serial[nr];
        if (serial[nr] == 2)
        {
            cout << " DWAA!!";
        }
        cout << endl;
    } 
    //********************************************************************************************************************
    cout << endl << endl << endl;
    //------------------------------------------------[ punkt 2 SYMBOLE ]-------------------------------------------------

    vector<char> symbole(10);
    vector<char> litery (12,'-');

    cout << "Tresc wektora litery: \n";
    for (int i = 0; i < litery.size(); ++i)
    {
        cout << litery[i];
    }
    cout << endl;

    litery[0] = 'M';
    litery[6] = 'B';
    litery[10] = 'X';

    for (int i = 0; i < litery.size(); ++i)
    {
        cout << litery[i];
    }
    cout << endl;

    //********************************************************************************************************************
    cout << endl << endl << endl;
    //------------------------------------------------[ punkt 3 STRING ]--------------------------------------------------

    vector<string> fizycy {"Galilei", "Newton", "Einstein"};

    vector<string> muzycy;
    cout << "a) muzycy.size() = " << muzycy.size() << endl;

    muzycy.push_back("Chopin");
    cout << "b) muzycy.size() = " << muzycy.size() << endl;

    muzycy.push_back("Mozart");
    muzycy.push_back("Bach");

    for (int i = 0; i < muzycy.size(); ++i)
    {
        cout << "muzycy[" << i << "] to:" << muzycy[i] << endl;
    }
        //zmiana tresci
    muzycy[1] = "Moniuszko";
    muzycy[2] = muzycy[0];
    
    cout << "Podaj nazwisko ulubionego kompozytora: ";
    string ulubiony;
    cin >> ulubiony;
    muzycy.push_back(ulubiony);

    for (int i = 0; i < muzycy.size(); ++i)
    {
        cout << muzycy[i] << ", ";
    }
    cout << endl;

return 0;    
}