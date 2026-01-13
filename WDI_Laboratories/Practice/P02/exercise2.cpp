#include <iostream>

using namespace std;

int main()
{
    int liczby_calkowite[10] = {1,2,3,10,4,5,6,8,9,9};

    int max = liczby_calkowite[0];

    int count = 0;

    for(int i=1; i<10; i++)
    {
        if(max<liczby_calkowite[i])
            max = liczby_calkowite[i];
        else 
            continue;
    }

    for(int i=0; i<10; i++)
    {
        if(liczby_calkowite[i]==max)
            count++;
        else 
            continue;
    }

    cout << "Najwiekszym elementem tablicy jest: " << max << " i pojawia sie: " << count << " razy" << endl;
    return 0;
}