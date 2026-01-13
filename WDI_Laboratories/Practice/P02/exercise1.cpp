#include <iostream>

using namespace std;

int main()
{
    int count_zero = 0;
    int count_minus = 0;
    int count_plus = 0;

    int N;

    int tablica[N];

    cout << "Wprowadz dlugosc tablicy: ";
    cin >> N;
    cout << "Podaj liczby ktore chcesz wprowadzic do tablicy: ";    

    for(int i=0; i<N; i++)
    {
        cin >> tablica[i];
    }

    for(int i=0; i<N; i++)
    {
        if(tablica[i]<0)
            count_minus++;
        else if(tablica[i]>0)
            count_plus++;
        else 
            count_zero++;
    }

    cout << "Z liczb wprowadzonych do tablicy znajduje sie: " << endl;
    cout << "Liczby ujemne: " << count_minus << endl;
    cout << "Liczby plus: " << count_plus << endl;
    cout << "Liczby zero: " << count_zero << endl;

    return 0;
}