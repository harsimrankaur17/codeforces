#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        bool flag = false;
 
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = true;
                break;
            }
        }
 
        if (flag && k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
 
    return 0;
}