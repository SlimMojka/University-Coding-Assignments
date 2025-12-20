#include <iostream>

using namespace std;

int main()
{
 
    int n, liczba, suma;

    cout << "Podaj ilosc liczb ciagu: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> liczba;
        suma = suma + liczba;
    }
    cout << suma;

}