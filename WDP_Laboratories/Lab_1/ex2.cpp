#include <iostream>
 
using namespace std;

int main()
{

    float a, b, iloraz;

    cout << "Podaj 1 liczbe: ";
    cin >> a;
    cout << "Podaj 2 liczbe: ";
    cin >> b;

    if(b==0)
    {
        cout << "Pamietaj sknero nie dziel przez 0";
    }
    else 
    {
        iloraz = a/b;
        cout << iloraz;
    }

}