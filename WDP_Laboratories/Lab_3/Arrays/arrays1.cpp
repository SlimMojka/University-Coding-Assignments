#include <iostream>

using namespace std;

int main()
{
    int dlugosc_1 = 3;
    int dlugosc_2 = 4;
    int suma = 0;

    int tablica[dlugosc_1][dlugosc_2];

    cout << "Wpisuj wartosci: ";
    for(int i=0; i<dlugosc_1; i++)
    {
        for(int j=0; j<dlugosc_2; j++)
        {
            cin >> tablica[i][j];
        }
    }

    for(int i=0; i<dlugosc_1; i++)
    {
        for(int j=0; j<dlugosc_2; j++)
        {
            suma = suma + tablica[i][j];
        }
    }

    cout << "Suma wszystkich wartosci tej tablicy 2-wymiarowej wynosi: " << suma;
    return 0;
}