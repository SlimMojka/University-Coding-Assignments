#include <iostream>

using namespace std;


int oblicz_pole_prostokata(int a, int b)
{
    return a*b;
}

void sumuj(int a, int b)
{
    cout << "suma dzialek wynosi: " << a+b << "m2" << endl;
}

string wypisz_tekst(string tekst, string osoba)
{
    return tekst+", życzy "+osoba;
}

void wyswietl_tekst(string tekst)
{
    cout << tekst << endl;
}

int main()
{
    sumuj(oblicz_pole_prostokata(40,10),oblicz_pole_prostokata(20,32));
    wyswietl_tekst(wypisz_tekst("Merry chrajsler","Maria"));
    
}