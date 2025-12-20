#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int liczba = (rand() % 200) + 1;
    int n = 0; // liczba wprowadzana przez uzytkownika

    cout << "Sproboj zgadnac liczbe z przedzialu 1-200" << endl;

    while(n!=liczba)
    {
        cout << "Sproboj zgadnac liczbe: ";
        cin >> n;

        if(n<liczba)
        {
            cout << "Wieksza!" << endl;
        }
        else if(n>liczba)
        {
            cout << "Mniejsza!" << endl;
        }
    }
    cout << "Zgadles!";

    return 0;
    
}