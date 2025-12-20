#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int liczba_uzytkownika;
    int dlugosc_1 = 5;
    int dlugosc_2 = 5;
    int tablica[dlugosc_1][dlugosc_2];

    for(int i=0; i<dlugosc_1; i++)
    {
        for(int j=0; j<dlugosc_2; j++)
        {
            tablica[i][j] = rand()%50+1;
        }
    }

    bool sprawdzono = 0;

    while(sprawdzono==0)
    {
        cout << "Wprowadz liczbe ktora chcesz znalezc: ";
        cin >> liczba_uzytkownika;

        for(int i=0; i<dlugosc_1; i++)
        {
            for(int j=0; j<dlugosc_2; j++)
            {
                if(tablica[i][j]==liczba_uzytkownika)
                {
                    cout << "Liczba uzytkownika znajduje sie w ["<<i<<"]["<<j<<"] miejscu tablicy" << endl;
                    sprawdzono=1;
                }
            }
        }
        
        if(sprawdzono==0)
        {
            cout << endl << "Twojej liczby nie ma w tablicy, sproboj ponownie" << endl;
        }
    }

    return 0;
}