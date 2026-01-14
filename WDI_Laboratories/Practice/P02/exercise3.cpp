#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));

    int N;
    cout << "Podaj dlugosc tablicy: ";
    cin >> N;
    int tablica[N];

    for(int i=0; i<N; i++)
        tablica[i] = rand() % 10 + 1;

    for(int i=0; i<N; i++)
        cout << tablica[i] << " ";
    
    for(int i=0; i<N; i++)
    {
        if(tablica[i]%2==0)
            tablica[i] = pow(tablica[i],2);
        else 
            continue;
    }

    cout << "\n";
    cout << "Tablica po podniesieniu liczb parzystych do kwadratu:" << endl;

    for(int i=0; i<N; i++)
        cout << tablica[i] << " ";

    return 0;
}