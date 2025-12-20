#include <iostream>

using namespace std;

int main()
{
    int liczba;

    cout << "Podaj cyfre (1-7): ";
    cin >> liczba;

    if(liczba==1)cout << "poniedzialek";
    else if(liczba==2)cout << "wtorek";
    else if(liczba==3)cout << "sroda";
    else if(liczba==4)cout << "czwartek";
    else if(liczba==5)cout << "piatek";
    else if(liczba==6)cout << "sobota";
    else if(liczba==7)cout << "niedziela";
    else
    {
        cout << "Zle parametry";
    }
}