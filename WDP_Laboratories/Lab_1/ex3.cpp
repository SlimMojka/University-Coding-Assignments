#include <iostream>

using namespace std;

int main()
{

    int wiek;

    char plec;

    cout << "Podaj wiek: ";
    cin >> wiek;

    cout << "Podaj płeć (m/k): ";
    cin >> plec;

    if(wiek<13 && plec=='m')
    {
        cout << "Jestes dzieckiem - chlopak";

    }
    else if(wiek>13 && wiek<18 && plec =='m')
    {
        cout << "Jestes nastolatkiem - chlopak";
    }
    else if(wiek>18 && plec =='m')
    {
        cout << "Jestes dorosly - mezczyzna";
    }
    else if(wiek<13 && plec=='k')
    {
        cout << "Jestes dzieckiem - dziewczyna";

    }
    else if(wiek>13 && wiek<18 && plec =='k')
    {
        cout << "Jestes nastolatkiem - dziewczyna";
    }
    else if(wiek>18 && plec =='k')
    {
        cout << "Jestes dorosla - kobieta";
    }
    else 
    {
        cout << "Niepoprawne parametry";
    }

}