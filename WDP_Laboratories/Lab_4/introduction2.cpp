#include <iostream>

using namespace std;

void wyswietl_hp(int postac)
{
    cout << "Pozostało " << postac << " HP" << endl;
}

void zadaj_dmg(int &hp, int damage)
{
    hp = hp - damage;
    if(hp <= 0)
    {
        cout << "You're dead" << endl;
    }
}



int main()
{
    int character = 10;
    int dmg = 3;

    wyswietl_hp(character);
    zadaj_dmg(character,dmg);
    wyswietl_hp(character);
}