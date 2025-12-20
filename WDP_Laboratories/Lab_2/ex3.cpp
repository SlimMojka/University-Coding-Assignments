#include <iostream>

using namespace std;

int main()
{

    int x, y; // Przedzial
    int k; // Dzielnik

    cout << "Podaj przedzial: ";
    cin >> x >> y;

    cout << "Podaj dzielnik: ";
    cin >> k;

    for(int i=x; i<=y; i++)
    {
        if(i%k==0)
        {
            cout << "Liczba podzielna przez " << k << ": " << i << endl;
        }
    }
}