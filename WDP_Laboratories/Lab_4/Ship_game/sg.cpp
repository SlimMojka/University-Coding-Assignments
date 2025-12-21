#include <iostream>

using namespace std;

void wyswietl(int tablica[][10])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(tablica[i][j]==0 || tablica[i][j]==1)
            {
                cout << "[ # ] ";
            }
            else if(tablica[i][j]==2)
            {
                cout << "[ T ] ";
            }
            else
            {
                cout << "[ P ] ";
            }
        }
        cout << endl << endl;
    }
}

bool strzelaj(int wiersz, int kolumna, int tablica[][10])
{
    if(tablica[wiersz-1][kolumna-1]==1)
    {
        tablica[wiersz-1][kolumna-1]=2;
        return true;
    }
    else 
    {
        tablica[wiersz-1][kolumna-1]=3;
        return false;
    }
}

int main()
{
    int licznik = 20;
    bool trafione = 0;
    int x, y;
    int plansza_statkow[10][10] = {{0,0,0,0,0,0,0,0,0,0},
                                   {0,1,0,0,1,0,0,1,1,0},
                                   {0,1,0,0,0,0,0,0,0,0},
                                   {0,1,0,0,1,1,0,0,0,0},
                                   {0,1,0,0,0,0,0,0,0,0},
                                   {0,0,0,0,0,1,0,0,0,0},
                                   {0,0,1,0,0,1,0,0,0,0},
                                   {0,0,0,0,0,1,0,1,0,1},
                                   {1,1,0,0,0,0,0,0,0,0},
                                   {0,0,0,0,0,0,0,1,1,1}};

    while(licznik>0)
    {
        cout << "Podaj pole w ktore chcesz strzelic (1-10): ";
        cin >> x >> y;
        trafione = strzelaj(x,y,plansza_statkow);
        if(trafione==1)
        {
            licznik--;
            cout << endl;
            cout << "Trafione!" << endl;
            wyswietl(plansza_statkow);
            trafione=0;
        }
        else 
        {
            cout << endl;
            cout << "Pudlo :(" << endl;
            wyswietl(plansza_statkow);
        }
    }
}