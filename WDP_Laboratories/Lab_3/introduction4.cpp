#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));

    int tab[6][3][4];

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                tab[i][j][k]=rand()%10;
            }
        }
    }

    for(int i=0; i<6; i++)
    {
        cout << "|";
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                cout << tab[i][j][k] << " ";
            }
            cout << "|";
        }
        cout << "\n";
    }
}