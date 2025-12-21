#include <iostream>

using namespace std;

void wyswietl(int tab[][6], bool odkryte[][6])
{
    cout << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(odkryte[i][j])
                cout << tab[i][j] << "\t";
            else
                cout << "*\t";
        }
        cout << endl;
    }
}

bool sprawdz(int tab[][6], bool odkryte[][6], int w1, int k1, int w2, int k2)
{
    if(tab[w1][k1] == tab[w2][k2])
    {
        odkryte[w1][k1] = true;
        odkryte[w2][k2] = true;
        cout << "Zgadles! Para odkryta." << endl;
        return true;
    }
    else
    {
        cout << "Nie zgadles." << endl;
        return false;
    }
}

int main()
{
    int plansza[4][6] = {{11,2,6,1,9,3},
                         {12,6,4,10,8,12},
                         {3,11,5,7,1,5},
                         {10,2,9,8,7,4}};

    bool odkryte[4][6] = {false};

    int w1, k1, w2, k2;
    int ruchy = 0;
    int znalezione_pary = 0;

    cout << "Gra MEMORY (4x6). Odkryj wszystkie pary." << endl;

    while(znalezione_pary < 12)
    {
        wyswietl(plansza, odkryte);

        cout << endl << "Podaj pierwsze pole (wiersz kolumna 1-4 1-6): ";
        cin >> w1 >> k1;
        cout << "Podaj drugie pole: ";
        cin >> w2 >> k2;

        w1--; k1--; w2--; k2--;

        if(odkryte[w1][k1] || odkryte[w2][k2])
        {
            cout << "Jedno z pol jest juz odkryte!" << endl;
            continue;
        }

        ruchy++;

        if(sprawdz(plansza, odkryte, w1, k1, w2, k2))
            znalezione_pary++;
    }

    cout << endl << "Brawo! Odkryles wszystkie pary." << endl;
    cout << "Liczba ruchow: " << ruchy << endl;

    return 0;
}
