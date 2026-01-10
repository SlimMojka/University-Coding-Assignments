#include <iostream>
#include <iomanip>

using namespace std;

/*
Napisz program, który:

* tworzy tablicę `int A[5][5]`
* wypełnia ją kolejnymi liczbami od 1 do 25
* wypisuje macierz w postaci tabeli
  *(użyj pętli zagnieżdżonych)*
*/

int main()
{

    int A[5][5] = {{1, 2, 3, 4, 5 },
                   {6, 7, 8, 9, 10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25}};

    int i = 0; 
    int j = 0;

    for(i=0; i<5; i++)
    {
        cout << "| ";
        for(j=0; j<5; j++)
        {
            cout << setw(6) << A[i][j];
        }
        cout << " | ";
        cout << "\n";
    }

}