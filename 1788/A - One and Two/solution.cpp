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
        int x;
        cin >> x;
 
        vector<int> arr(x);
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 2)
            {
                c++;
            }
        }
        if (c % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int h = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] == 2)
                {
                    h++;
                }
                if (h == c / 2)
                {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
 
    return 0;
}