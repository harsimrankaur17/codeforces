#include <iostream>
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
        long long x;
        cin >> x;
        if ((x + 1) % 3 == 0 || (x - 1) % 3 == 0)
            cout << "First" << '
';
        else
            cout << "Second" << '
';
    }
    return 0;
}