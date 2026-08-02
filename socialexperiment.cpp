#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        if (x == 2 || x == 3)
        {
            cout << x << endl;
        }
        else if (x % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
