#include <iostream>
using namespace std;

int main()
{   
    char litera;
    
    do{
        cout << "Napisz jakas litere : " << litera ;
        cin >> litera;
        cout << "\nNapisales: " << litera << "\n";
    }while(litera != 'K');

    cout << "K konczy gre" << endl;
    return 0;
}