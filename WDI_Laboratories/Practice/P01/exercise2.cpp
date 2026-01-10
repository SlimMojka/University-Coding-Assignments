#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    /*
    Napisz program, który:
    * wczyta macierz `NxM`
    * obliczy sumę wszystkich elementów
    * dostęp do elementów zrealizuj **przez wskaźnik**
    */

    int N, M, suma = 0;

    cout << "Podaj wielkosc macierzy, podaj 1 wymiar: ";
    cin >> N;
    cout << "Podaj wielkosc macierzy, podaj 2 wymiar: ";
    cin >> M;

    int macierz[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            macierz[i][j] = rand() % 25 + 1;
        }
    }

    // Suma

    int* ptr = &macierz[0][0];

    for(int i=0; i<N*M; i++)
    {
        int wartosc = *(ptr + i);
        suma = suma + wartosc;
    }

    cout << "Suma macierzy wynosi: " << suma;


}