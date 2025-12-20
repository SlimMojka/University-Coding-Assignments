#include <iostream>

using namespace std;

int main()
{
    /*
    Zad 4 
    Napisz program wypisujący liczby całkowite parzyste od liczby podanej 
    przez użytkownika aż do 0. 
    */

    int x; // koniec przedzialu, 0 - poczatek

    cout << "Podaj koniec przedzialu: ";
    cin >> x;

    if(x<0)
    {
        for(int i=x; i<=0; i++)
        {
            if(i%2==0)
            {
                cout << "Liczba parzysta: " << i << endl; 
            }
        }
    }
    else 
    {
        for(int i=x; i>=0; i--)
        {
            if(i%2==0)
            {
                cout << "Liczba parzysta: " << i << endl;
            }
        }
    }

}