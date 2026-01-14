#include <iostream>

using namespace std;

int main()
{

    /*

    Wypisz na ekranie wzór:
    *
    **
    ***
    ****
    *****

    */
   
    int N;
    cout << "Wprowadz wysokosc trojkata: ";
    cin >> N;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}