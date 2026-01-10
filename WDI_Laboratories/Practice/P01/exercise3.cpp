#include <iostream>
#include <stdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    /*
    Dla zadanej macierzy:
    * znajdź najmniejszy i największy element
    * wypisz ich położenie (indeks wiersza i kolumny)
    * użyj wskaźnika do przechodzenia po tablicy
    */

    int macierz[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            macierz[i][j] = rand() % 20 + 1;
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            
        }
    }
}