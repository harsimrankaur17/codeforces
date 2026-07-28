
#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {

        int count = 0;
        int n;
        cin >> n;

        for (int x = 0; x <= n; x++)
        {
            for (int y = 0; y <= n; y++)
            {
                if (2 * x + 4 * y == n)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}