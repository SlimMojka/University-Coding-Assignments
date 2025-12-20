#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Podaj przedzial: ";
    cin >> a >> b;

    if(a<b)
    {
        cout << "Rosnaco: " << endl;
        for(int i=a; i<=b; i++)
        {
            cout << " " << i;
        }
        cout << "\n";
        cout << "Malejaco: " << endl;
        for(int k=b; k>=a; k--)
        {
            cout << " " << k;
        }
    }
    else if(b<a)
    {
        cout << "Rosnaco: " << endl;
        for(int i=b; i<=a; i++)
        {
            cout << " " << i;
        }
        cout << "\n";
        cout << "Malejaco: " << endl;
        for(int k=a; k>=b; k--)
        {
            cout << " " << k;
        }
    }
    else 
    {
        cout << "Liczby sa rowne";
    }
}