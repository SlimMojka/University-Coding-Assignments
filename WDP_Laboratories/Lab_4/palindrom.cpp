#include <iostream>

using namespace std;

void palindrom(int rozmiar, int tab[])
{
    for(int i=0; i<rozmiar/2; i++)
    {
        int temp = tab[i];
        if(tab[i]==tab[rozmiar-1-i])
        {
            continue;
        }
        else 
        {
            cout << "Tablice nie sa takie same od obu stron";
            break;
        }
    }
    cout << "Tablica jest taka sama od obu stron" << endl;
}

int main()
{

    int tablica[6] = {6,4,3,3,4,6};

    palindrom(6,tablica);
}