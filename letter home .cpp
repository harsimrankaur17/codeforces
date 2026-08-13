#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Example action: output the array (space-separated) on its own line
        for (int i = 0; i < n; ++i)
        {
            if (i)
                cout << ' ';
        }
        int m = abs(a[0] - k);
        int s = abs(a[n - 1] - k);
        if (k < a[n - 1] && k > a[0])
        {
            if (m > s)
            {
                cout << s * 2 + m << endl;
            }
            else
            {
                cout << m * 2 + s << endl;
            }
        }

        else if (k >= a[n - 1])
        {
            cout << k - a[0] << endl;
        }
        else
        {
            cout << a[n - 1] - k << endl;
        }
    }
    return 0;
}
