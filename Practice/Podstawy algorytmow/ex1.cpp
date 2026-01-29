#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> liczby = {3, 8, 1, 6};

    liczby.erase(liczby.begin());
    liczby.push_back(10);

    cout << "\n";

    for(int i=0; i<liczby.size(); i++)
    {
        cout << liczby[i] << endl;

    }

    return 0;
}