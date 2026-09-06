#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x;
        cin >> x;
 
        vector<int> a(x);
 
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
 
        cout <<gcd(a[0], a[x - 1]) << endl;
    }
 
    return 0;
}