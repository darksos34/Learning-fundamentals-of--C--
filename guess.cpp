#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int uitkomst = 9;
    int raadhetgetal;
    bool nietgeraden = true;
    while (nietgeraden)


    {
        cout << "Raad het correcte getal: ";
        cin >> raadhetgetal;
        if (raadhetgetal == uitkomst)
        {
            cout << "Yes!" << '\n';
            cout << "correct " << '\n';
            // game blijft aan 
            nietgeraden = false;
            //nietgeraden = true;
            
        }
        if (raadhetgetal < uitkomst)
        {
            cout << "Te laag...!" << '\n';
            
        }
        if (raadhetgetal > uitkomst)
        {
            cout << "Te Hoog..." << '\n';
            
        }
    }
}
