#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int y = 0;
        if (a[0] == 1)
        {
            y++;
        }
        if (a[x - 1] == 1)
        {
            y++;
        }
        int z = 0;
        if (y > 0)
        {
            for (int i = 1; i < x - 1; i++)
            {
                if (a[i] == 0)
                {
                    z++;
                }
            }
        }
        if (y == 1 && z >= 1)
        {
            cout << 1 << endl;
        }
        else if (y == 2 && z >= 2)
        {
            cout << 2 << endl;
        }
        else if (y == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
 
    return 0;
}