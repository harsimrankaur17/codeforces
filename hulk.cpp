#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0 && i < x)
        {
            cout << "I love that ";
        }
        else if (i % 2 != 0 && i < x)
        {
            cout << "I hate that ";
        }
        else if (i % 2 == 0 && i == x)
        {
            cout << "I love it" << endl;
        }
        else if (i % 2 != 0 && i == x)
        {
            cout << "I hate it" << endl;
        }
    }
    return 0;
}
