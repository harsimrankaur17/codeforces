#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x;
        cin >> x;
 
        vector<int> v;
 
        for (int i = 0; i < x; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        int l = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v[0])
            {
                l++;
            }
        }
        int y = v.size() - l;
        if (y == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l << " " << y << endl;
            for (int i = 0; i < l; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
 
            for (int i = l; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
 
    return 0;
}