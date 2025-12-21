#include <iostream>

using namespace std;

void wstaw_kolko(char tablica[][3])
{
    int kolumna, wiersz;
    
    do
    {
        cout << "Na ktore pole chcesz wstawic kolko? (kolumna wiersz 1-3): ";

        cin >> kolumna >> wiersz;

        if(kolumna < 1 || kolumna > 3 || wiersz < 1 || wiersz > 3)
        {
            cout << "Bledne dane! Podaj liczby 1-3.\n";
            continue;
        }

        if(tablica[kolumna-1][wiersz-1] != '#')
        {
            cout << "To pole jest juz zajete! Wybierz inne.\n";
        }

    }while(tablica[kolumna-1][wiersz-1] != '#');

    tablica[kolumna-1][wiersz-1] = 'O';
}

void wstaw_krzyzyk(char tablica[][3])
{
    int kolumna, wiersz;

    do
    {
        cout << "Na ktore pole chcesz wstawic krzyzyk? (kolumna wiersz 1-3): ";
        
        cin >> kolumna >> wiersz;

        if(kolumna < 1 || kolumna > 3 || wiersz < 1 || wiersz > 3)
        {
            cout << "Bledne dane! Podaj liczby 1-3.\n";
            continue;
        }

        if(tablica[kolumna-1][wiersz-1] != '#')
        {
            cout << "To pole jest juz zajete! Wybierz inne.\n";
        }

    }while(tablica[kolumna-1][wiersz-1] != '#');

    tablica[kolumna-1][wiersz-1] = 'X';
}

void wyswietl_plansze(char tablica[][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << tablica[i][j] << " | ";
        }
        cout << endl;
    }
}

bool sprawdz_czy_wygrana(char t[][3])
{
    for(int i = 0; i < 3; i++)
        if(t[i][0] != '#' && t[i][0] == t[i][1] && t[i][1] == t[i][2])
            return true;

    for(int j = 0; j < 3; j++)
        if(t[0][j] != '#' && t[0][j] == t[1][j] && t[1][j] == t[2][j])
            return true;

    if(t[0][0] != '#' && t[0][0] == t[1][1] && t[1][1] == t[2][2])
        return true;

    if(t[0][2] != '#' && t[0][2] == t[1][1] && t[1][1] == t[2][0])
        return true;

    return false;
}



int main()
{
    int count = 0;

    bool wygrana = 0;

    char tablica[3][3] = {{'#','#','#'},
                          {'#','#','#'},
                          {'#','#','#'}};

    cout << "Gra w kółko i krzyżyk" << endl << "Puste pola - # " << endl;

    while(!wygrana && count < 9)
    {
        wstaw_kolko(tablica);
        count++;
        wygrana = sprawdz_czy_wygrana(tablica);
        cout << endl;
        if(wygrana)
        {
            cout << "Kolka wygraly!" << endl;
            wyswietl_plansze(tablica);
            break;
        }
        else 
        {
            wyswietl_plansze(tablica);
            cout << endl;
        }
        wstaw_krzyzyk(tablica);
        count++;
        wygrana = sprawdz_czy_wygrana(tablica);
        cout << endl;
        if(wygrana)
        {
            cout << "Krzyzyki wygraly!" << endl;
            wyswietl_plansze(tablica);
            break;
        }
        else 
        {
            wyswietl_plansze(tablica);
            cout << endl;
        }
    }
    if(count==9)
    {
        cout << "remis";
    }
}