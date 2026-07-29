#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int y = 0;
        int x;
        cin >> x;
        int aray[x];
        for (int i = 0; i < x; i++)
        {
            cin >> aray[i];
        }
        for (long long j = 2; j <= 1e18; j++)
        {
            for (int m = 0; m < x; m++)
            {
                if (array[m] == j)
                {
                    y++;
                }
            }
            if (y < x)
            {
                cout << j << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}