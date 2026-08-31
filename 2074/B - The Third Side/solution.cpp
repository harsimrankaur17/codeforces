// This is a basic C++ program that reads t, then for each test reads x and an array of size x, then prints the array.
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
        int x;
        cin >> x;
 
        vector<long long> a(x);
        for (int i = 0; i < x; ++i)
        {
            cin >> a[i];
        }
        if (x == 1)
        {
            cout << a[0] << endl;
        }
        int sum = a[0] + a[1] - 1;
        for (int i = 2; i < x; i++)
        {
            sum = sum + a[i] - 1;
        }
        if (x != 1)
        {
            cout << sum << endl;
        }
    }
 
    return 0;
}