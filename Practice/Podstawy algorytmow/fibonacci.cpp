#include <iostream>

using namespace std;

long long fibonacci(int f)
{

    long long suma = 0; 

    if(f==0)
    {
        return 0;
    }
    else if(f==1)
    {
        return 1;
    }
    else 
    {
        suma = suma + fibonacci(f-1)+fibonacci(f-2);
  
        return suma;
    }
}

int main()
{

    cout << "\n";

    int ciag;
    cout << "Podaj na ktorym wyrazie konczymy ciag: ";
    cin >> ciag; 

    cout << "suma elemntow wynosi " << fibonacci(ciag);

}