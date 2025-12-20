#include <iostream>
#include <cmath>

using namespace std;

int poleProstokata(float x, float y)
{
    return x*y;
}

int obwodProstokata(float x, float y)
{
    return x+x+y+y;
}

int poleKwadratu(float x)
{
    return x*x;
}

int obwodKwadratu(float x)
{
    return 4*x;
}

int obwodTrojkata(float x, float y, float z)
{
    return x+y+z;
}

int poleTrojkata(float x, float y, float z)
{
    float s = (x+y+z)/2.0;
    float pole = sqrt(s*(s-x)*(s-y)*(s-z));
    return pole;
}

int main()
{
    int operacja;
    float a, b, c, s; // s do wzoru herona na pole trojkata
    char powrot_do_menu = 'Y';

    do
    {
        cout << "Wprowadz co chcesz obliczyc" << endl;
        cout << "1 - Prostokat" << endl;
        cout << "2 - Kwadrat" << endl;
        cout << "3 - Trojkat" << endl; 

        cin >> operacja;

        switch(operacja)
        {
            case 1:
                cout << "Wprowadz bok a i b: ";
                cin >> a >> b;
                cout << "Pole wynosi prostokata wynosi: " << poleProstokata(a,b) << endl;
                cout << "Obwod prostokata wynosi: " << obwodProstokata(a,b) << endl;
                break;
            case 2:
                cout << "Wprowadz bok a: ";
                cin >> a;
                cout << "Pole kwadratu wynosi: " << poleKwadratu(a) << endl;
                cout << "Obwod kwadratu wynosi: " << obwodKwadratu(a) << endl;
                break;
            case 3:
                cout << "Wprowadz boki a, b i c trojkata: ";
                cin >> a >> b >> c;

                if(a + b > c && a + c > b && b + c > a)
                {

                    cout << "Pole trojkata wynosi: " << poleTrojkata(a,b,c) << endl;
                    cout << "Obwod trojkata wynosi: " << obwodTrojkata(a,b,c) << endl;
                    break;
                }
                else 
                {
                    cout << "Wprowadzono zle boki trojkata";
                    break;
                }
            default:
                cout << "Wprowadzono zla liczbe";
                break;
        }
        cout << "Czy chcesz jeszcze cos obliczyc? (Y/N): ";
        cin >> powrot_do_menu;
     
    }while(powrot_do_menu=='Y');


}