#include <iostream>

using namespace std;

int main()
{
    int x, y, suma=0;

    cout << "Podaj przedzial: ";
    cin>>x>>y;

    for(int i=x; i<=y; i++)
    {
        if(i%2!=0)
        {
            suma = suma + i;
        }
    }
    cout << "Suma liczb nieparzystych wynosi: " << suma;
}