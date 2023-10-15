#include <iostream>

using namespace std;

int main()
{
    bool end;
    int n, k;
        
    end = false;
    while(!end)
    {
        cin >> n;
        cin >> k;
        if (n == 0 and k == 0)
        {
            end = true;
            cout << "Programa terminado!" << "\n";
        } 
        else
        {
            cout << "Ya tengo sueño" << "\n" ;
        }
    }

    return 0;
}
