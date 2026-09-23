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
 
        for (int i = 0; i < 3; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        int l = v[0];
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < l)
            {
                l = v[i];
            }
        }
        cout << x - l << endl;
    }
 
    return 0;
}