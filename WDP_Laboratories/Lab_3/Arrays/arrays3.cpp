#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /*
    Napisz program wczytujący do tablicy 5x5 losowe liczby. 
    Program ma wypisać najmniejszą i największą liczbę w tablicy. 
    */
    srand(time(NULL));

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

    int min = tablica[0][0];
    int max = tablica[0][0];

    for(int i=0; i<dlugosc_1; i++)
    {
        for(int j=0; j<dlugosc_2; j++)
        {
            if(tablica[i][j]<min)
            {
                min = tablica[i][j];
            }
            if(tablica[i][j]>max)
            {
                max = tablica[i][j];
            }
        }
    }

    cout << "Min wartosc z tablicy: " << min << endl;
    cout << "Max wartosc z tablicy: " << max << endl;

}