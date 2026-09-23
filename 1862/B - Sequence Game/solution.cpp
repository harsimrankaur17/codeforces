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
 
        vector<int> v(x);
 
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
 
        vector<int> ans;
 
        for (int i = 0; i < x; i++)
        {
            if (i > 0 && v[i] < v[i - 1])
            {
                ans.push_back(1);
            }
 
            ans.push_back(v[i]);
        }
 
        cout << ans.size() << endl;
 
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}