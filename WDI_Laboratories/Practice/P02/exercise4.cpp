#include <iostream>

using namespace std;

int main()
{
    int N = 6;
    int tablica[N] = {1,2,3,3,2,1};

    bool sprawdzenie = true;

    for(int i=0; i<N/2; i++)
    {
        if(tablica[i]==tablica[N-1-i])
        {
            sprawdzenie = 1;
            continue;
        }
        else
        {
            sprawdzenie = 0;
            break;
        }
    }

    if(sprawdzenie==1)
        cout << "Tablica jest palindromem";
    else 
        cout << "Tablica nie jest palindromem";

    return 0;
}