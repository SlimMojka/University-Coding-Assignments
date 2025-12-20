#include <iostream>

using namespace std;

// funkcja moze miec taka sama nazwe jesli parametry roznia sie od siebie, program to odrozni

void wyswietl_zyczenia()
{
    cout << "Wszystkiego najlepszego" << endl;
}

void wyswietl_zyczenia(string tresc)
{
    cout << tresc << endl;
}

void wyswietl_zyczenia(string tresc, string imie)
{
    cout << tresc <<"drogi "<< imie<< endl;
}

void wyswietl_zyczenia(string imie, int ile)
{
    cout << imie << ". dostales " << ile << " zloty" << " od mikołaja" << endl;
}

int main()
{

    wyswietl_zyczenia();
    wyswietl_zyczenia("chrabia montechristo");
    wyswietl_zyczenia();
    wyswietl_zyczenia("Wszystkiego najlepszego", "Ada");
    wyswietl_zyczenia("Michał", 10);
}