#include <iostream>
#include <cstdlib>
using namespace std;
 
void wyswietl(int tab[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
 
void losuj(int tab[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tab[i][j] = rand()%10;
        }
    }
}
 
void obroc(int tabA[5][5], int tabB[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tabB[j][5-1-i] = tabA[i][j];
        }
    }
}
 
int main()
{
    srand(time(NULL));
    int tabA[5][5] = {0};
    int tabB[5][5] = {0};
    losuj(tabA);
    wyswietl(tabA);
    obroc(tabA,tabB);
    cout<<"----------------"<<endl;
    wyswietl(tabB);
}