#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        int y = 0;

        set<int> s;
        for (int i = 0; i < n; i++)
        {

            if (a[i] < k)
            {
                s.insert(a[i]);
            }
            else if (a[i] == k)
            {
                y++;
            }
        }

        x = k - s.size();
        if (y >= x)
        {
            cout << y << endl;
        }
        else if (x > y)
        {
            cout << x << endl;
        }
    }

    return 0;
}
