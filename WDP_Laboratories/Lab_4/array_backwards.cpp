#include <iostream>

using namespace std;

void odwroc_tablice(int rozmiar, int tab[])
{
    for(int i=0; i<rozmiar/2; i++)
    {
        int temp = tab[i];
        tab[i] = tab[rozmiar-1-i];
        tab[rozmiar-1-i] = temp;
    }
}

void wyswietl_tablice(int rozmiar, int tab[])
{
    for(int i=0; i<rozmiar; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main()
{
    int x = 5;
    int tablica[x] = {1,2,3,4,5};
    odwroc_tablice(x,tablica);
    wyswietl_tablice(x,tablica);
}