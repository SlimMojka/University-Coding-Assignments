#include <iostream>

using namespace std;

int main()
{

    int n, suma = 0;

    cout << "Podaj liczbe n: ";
    cin >> n;

    if(n>0)
    {
        for(int i=1; i<n; i++)
        {
            suma = i*i;
            cout << i << " do potegi 2 wynosi: " << suma << endl;
        }
    }

}