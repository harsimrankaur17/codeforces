#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[a * a];
        for (int i = 0; i < a * a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a * a);
        vector<int> v;
 
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                v.push_back(arr[0] + i * c + j * b);
            }
        }
        sort(v.begin(), v.end());
        bool h = true;
        for (int i = 0; i < a * a; i++)
        {
            if (arr[i] != v[i])
            {
                h = false;
            }
        }
        if (v.size() == a * a && h == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
 
    return 0;
}