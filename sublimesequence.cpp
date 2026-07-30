#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int y, z;
        cin >> y >> z;
        if (z % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << y << endl;
        }
    }

    return 0;
}
