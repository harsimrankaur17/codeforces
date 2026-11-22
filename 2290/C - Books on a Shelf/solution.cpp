#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int x;
        cin >> x;
 
        vector<int> arr(x);
        for (int &value : arr)
            cin >> value;
 
        sort(arr.begin(), arr.end());
 
        vector<int> front, back;
        front.reserve(x);
        back.reserve(x);
 
        int count = 0;
        int freq = 0;
 
        for (int i = 0; i < x; i++)
        {
            if (i == 0 || arr[i] != arr[i - 1])
            {
                freq = 1;
                front.push_back(arr[i]); // first occurrence
            }
            else
            {
                freq++;
                back.push_back(arr[i]); // duplicates end mein
            }
 
            if (freq <= 2)
                count++;
        }
 
        // tere original erase/insert loop ka duplicates wala order descending aata tha
        reverse(back.begin(), back.end());
 
        cout << count << "
";
        for (int v : front)
            cout << v << " ";
        for (int v : back)
            cout << v << " ";
        cout << "
";
    }
    return 0;
}