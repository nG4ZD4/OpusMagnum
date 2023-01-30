#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 32; i++)
    {
        if (i % 8){
            cout << "\t";
        }
        else {
            cout << "\n"; }

        cout << i;
    }

}