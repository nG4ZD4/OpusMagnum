#include <iostream>
using namespace std;

void fun_przez_wartosc (int wartosc);
void fun_referencja_lwartosci (int &przezwisko_lwartosci);
void fun_referencja_const_wart (conts int &przezwisko_stalej_lwartosci);
void fun_referencja_rwartosci (int &&przezwisko_wart_chwilowej);
//*******************************************************************************************************************************
// A --------------------------------------------------------------------------------------------------------------------------
void fun_przez_wartosc(int wartosc)
{
    ++wartosc;
    cout << "A. fun_przez_wartosc odebrala argument przez wartosc i teraz = " << wartosc << "\n";
}

// B ------------------------------------------------------------------------------------------------------------------------
void fun_referencja_lwartosci(int &przezwisko_lwartosci)
{
    cout << "B. fun_referencja_lwartosci (" << przezwisko_lwartosci << ") odebrala argument jako referencja lwartosci\n";
    ++przezwisko_lwartosci;
}

// C ------------------------------------------------------------------------------------------------------------------------
void fun_referencja_const_wart (const int &przezwisko_stalej_lwartosci)
{
    cout << "C. fun_referencja_const_wartosci (" << przekazanie_stalej_lhaposci 
         << ") odebrala argument jako referencja stalej lwartosci\n";
         // inkrementacja zabroniona, bo to referencja do const
}

//*******************************************************************************************************************************
int main ()
{
    int object = 40;                                            // object jest lwartoscia

    // A --- wywolanie funkcji odbierajacej argument przez wartosc ("przez kopie") ---------------------------------------
    fun_przez_wartosc (object);
    cout << " main: object = " << object << endl;

    fun_przez_wartosc (80+1);
    cout << endl;

    // B --- wywolanie funkcji odbierajacej argument przez referencje obiektu (referencje lwartosci) -----------------------
    fun_referencja_lwartosci (object);
    cout << " kontrola, w main object = " << object << endl;                       // funkcja zmienia wartosc oryginalnego elementu

    fun_referencja_lwartosci (80+2);
    cout << "! fun_referencja_lwartosci (80+2) - niemozliwe wyslanie jej rwartosci" << endl;
    
    // C --- wywolanie funkcji odbierajacej argument jako "przewisko stalego obiektu" --------------------------------
    fun_referencja_const_wart (object);
    fun_referencja_const_wart (80+3);                       //jesli przydomek "const" to jest to dozwolone
    const int &przezwisko_stalej_lwartosci = (80+3);        // inny dowod ze jest to dozwolone
    cout << endl;
}




