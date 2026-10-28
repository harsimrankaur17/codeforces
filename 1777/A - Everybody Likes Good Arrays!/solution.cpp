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
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int count = 1, sum = 0;
 
        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2 == a[i - 1] % 2)
            {
                count++;
            }
            else
            {
                if (count > 1)
                    sum += count - 1;
 
                count = 1;
            }
        }
 
        if (count > 1)
            sum += count - 1;
 
        cout << sum << endl;
    }
 
    return 0;
}