#include <iostream>

using namespace std;

// jesli napiszemy tak void wyswietl(parametry); <- wtedy mowimy ze funkcja zostanie zdeklarowana nizej

void wyswietl(int tab[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void wyswietl_2d(int tab[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void zmien_liczbe(int x, int pozycja, int tab[], int rozmiar)
{
    tab[pozycja-1]=x;
    wyswietl(tab,rozmiar);
}

int main()
{
    int x = 6;
    int tab[x] = {6,4,2,1,7,1};

    int cyfry[3][3] = {{1,1,2},
                       {5,7,3},
                       {8,2,1}};
    wyswietl(tab,x);
    cout << "\n";
    zmien_liczbe(10,2,tab,x);
    cout << "\n";
    wyswietl_2d(cyfry);
}

