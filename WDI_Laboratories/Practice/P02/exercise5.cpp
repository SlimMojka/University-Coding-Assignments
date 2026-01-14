#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Za pomocą pętli zagnieżdżonych wypisz tabliczkę mnożenia 1–10 w formie tabeli.

    
    for(int i=1; i<=10; i++)
    {
        for(int k=1; k<=10; k++)
        {
            cout << setw(6) << i*k << " ";
        }
        cout << "\n";
    }

    

}