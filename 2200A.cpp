
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    for (int tc = 1; tc <= t; ++tc)
    {
        int count = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == a[n - 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
