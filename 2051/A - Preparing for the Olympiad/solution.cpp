#include <iostream>
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
 
        vector<int> a(x), b(x);
 
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
 
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        int sum = 0;
        for (int i = 0; i < x - 1; i++)
        {
            if (b[i + 1] < a[i])
            {
                sum += a[i] - b[i + 1];
            }
        }
        sum = sum + a[x - 1];
        cout << sum << endl;
    }
 
    return 0;
}