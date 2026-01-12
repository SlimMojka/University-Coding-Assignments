#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Napisz program, który:
    * mnoży dwie macierze `A` i `B`
    * zapisuje wynik w macierzy `C`
    * używa **trzech zagnieżdżonych pętli**
    */

    srand(time(NULL));

    int macierz_a[3][3];
    int macierz_b[3][3];
    int macierz_c[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            macierz_a[i][j] = rand() % 25 + 1;
            macierz_b[i][j] = rand() % 25 + 1;
        }

        for(int k=0; k<3; k++)
        {
            cout << setw(6) << macierz_a[i][k] << " ";
        }
        cout << "\n";

    }

    cout << "\n" << "||---------------------||" << "\n";
    cout << "\n";

    for(int i=0; i<3; i++)
    {
        for(int g=0; g<3; g++)
        {
            cout << setw(6) << macierz_b[i][g] << " ";
        }

        for(int k=0; k<3; k++)
        {
            macierz_c[i][k] = macierz_a[i][k] * macierz_b[i][k];
        }
        cout << "\n";
    }
    cout << "\n" << "||---------------------||" << "\n";
    cout << "Macierz C ktora jest wynikiem mnozenia Macierzy A i B: ";
    cout << "\n";
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << setw(6) << macierz_c[i][j] << " ";
        }
        cout << "\n";
    }
}