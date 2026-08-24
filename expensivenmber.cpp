#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z = 0;
        string y;
        cin >> y;
        for (int i = y.length() - 1; i >= 0; i--)
        {
            if (y[i] != '0')
            {
                z = i;
                break;
            }
        }
        int count = y.length() - 1 - z;
        for (int i = 0; i < z; i++)
        {
            if (y[i] != '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
