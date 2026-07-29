#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = x; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = x; j >= i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * (x)-1; j >= 2 * i - 1; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}