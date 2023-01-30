#include <iostream>
#include <string>
using namespace std;

int main()
{
    string solar {"Panel_sloneczny"};
    string antena {"Antena"};

    cout << "Napisz, jak masz na imie: \t";
    string imie;
    cin >> imie;

    cout << "Sterowanie sonda kosmiczna przejal wlasnie " << imie << endl;

    if (imie == "Lucjan") 
    {
        cout << "(Trafiles na najgorszego pilota)\n";
    }

    string rozkaz = "Naprawic -> " + solar;                 // Naprawic -> Panel_sloneczny

    string komunikat = antena + " -> dziala poprawnie";     // Antena -> dziala poprawnie

    rozkaz += " *NATYCHMIAST*";                             // [  rozkaz = rozkaz + " *NATYCHMIAST*"  ]
    cout << rozkaz << endl;                                 // "Naprawic -> Panel_sloneczny *NATYCHMIAST* 

    rozkaz = komunikat;                                     // [  antena + " -> dziala poprawnie"  ]
    cout << rozkaz << endl;                                 // "Antena -> dziala poprawnie"

    string raport = "Alfabetycznie wczesniej jest: ";
    if (solar < antena) {
        raport += solar;                                    // [  rozkaz = rozkaz + solar  ]
    }                                                       // Alfabetycznie wczesniej jest: Panel_sloneczny
    else {
        raport += antena;                                   // [  rozkaz = rozkaz + antena  ]                                                       
    }                                                       // Alfabetycznie wczesniej jest: Antena
    cout << raport << endl;

    komunikat = "Sprawdzone juz zostaly segmenty: ";
    for (int nr_segm = 39; nr_segm < 42; ++nr_segm)
    {
        string liczba_tekst = to_string(nr_segm);
        string element = antena + liczba_tekst;

        string nazwa_pliku = element + ".txt";
        cout << "Test segmentu " << nr_segm << "zapisany w pliku c:\\" << nazwa_pliku << endl;

        komunikat += (element + ", ");
    }
    cout << komunikat << endl;

    //-----------------------------------------/ Napis z wyroznieniem /----------------------------------------//
    string info = " NIE DZIALA - Antena satelitarna ";

    int szerokosc = info.size() + 6;
    string kreska (szerokosc, '-');
    string alarm = kreska + "\n*!*" + info + "*!*\n" + kreska;
        cout << alarm << endl;

    return 0;
}