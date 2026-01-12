#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /*
    Napisz program, który:
    * oblicza sumę każdego wiersza macierzy
    * zapisuje wyniki w jednowymiarowej tablicy
    * wykorzystuje pętle zagnieżdżone
    */

    srand(time(NULL));

    int macierz[4][3];
    int wyniki[4];
    int suma = 0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            macierz[i][j] = rand() % 25 + 1;
            cout << macierz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            suma += macierz[i][j];

            wyniki[i] = suma;
        }
        suma = 0;
    }

    cout << "\n";
    
    for(int i=0; i<4; i++)
    {
        cout << "Suma wiersza [" << i+1 << "] wynosi: " << wyniki[i] << endl;
    }

}