#include <iostream>

using namespace std;

int main()
{

    int tab[5];

    // int cyfry[6][3] = {{3,6,1},
    //                    {7,7,6},
    //                    {1,2,3},
    //                    {5,1,9},
    //                    {3,6,1},
    //                    {7,7,6}};

    int cyfry[6][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};



    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << cyfry[i][j] << " ";
        }
        cout << "\n";
    }

    cout << cyfry[2][4];

    

}