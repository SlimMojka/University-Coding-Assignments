#include <iostream>

using namespace std;

int main()
{
    /*
    Zad 2. 
    Napisz tablice dwuwymiarową 3x4. 
    Program ma podać sumę wszystkich liczb parzystych zawartych w tablicy. 
    */
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
            if(tablica[i][j]%2==0)
            {
                suma = suma + tablica[i][j];
            }
        }
    }

    cout << "Suma wszystkich wartosci tej tablicy (parzystych) 2-wymiarowej wynosi: " << suma;
    return 0;
}