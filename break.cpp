#include <iostream>
using namespace std;

/*
int main()
{
    int i = 10;

    while (1)
    {
        cout << "Petla i = " << i << endl;
        i = i-1;

        if (i<5)
        {
            cout << "Petla przerwana" << endl << endl;
            break;
        }
    }
*/


int main()
{

    int zakoncz = 3;

    for (int j = 0 ; j < 4 ; j++)
    {
        for (int m = 0 ; m < 10 ; m++)
        {
            cout << "*";
            if (m > zakoncz)break;
        }        
        cout << "\nKontynuujemy petle " << "for dla j = " << j << endl;
    }
    
    } 
