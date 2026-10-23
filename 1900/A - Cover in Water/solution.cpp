#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool z = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2] && arr[i] == '.')
            {
                cout << 2 << endl;
                z = false;
                break;
            }
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '.')
            {
                y++;
            }
        }
        if (y == 0)
        {
            cout << 0 << endl;
        }
        if (z != false && y != 0)
        {
            cout << y << endl;
        }
    }
    return 0;
}