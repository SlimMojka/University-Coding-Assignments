#include <iostream>

using namespace std;

int main()
{
    int liczba;
    do 
    {
        cout << "Podaj liczbe dodatnia wieksza od 0: ";
        cin >> liczba;
    }while(liczba <= 0 || liczba%2==1);

}