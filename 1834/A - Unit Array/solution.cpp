#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int y = 0;
        int z = 0;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                y++;
            }
            else
            {
                z++;
            }
        }
        int count = 0;
 
        if (z > y)
        {
            if ((z - y) % 2 == 0)
            {
                count = (z - y) / 2;
            }
            else
            {
                count = (z - y) / 2 + 1;
            }
        }
        z = z - count;
        if (z % 2 != 0)
        {
            count = count + 1;
        }
 
        cout << count << endl;
    }
 
    return 0;
}