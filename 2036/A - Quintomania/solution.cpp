#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x;
        cin >> x;
 
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        bool h = true;
        for (int i = 1; i < x; i++)
        {
            if (abs(arr[i] - arr[i - 1]) != 5 && abs(arr[i] - arr[i - 1]) != 7)
            {
                h = false;
            }
        }
        if (h == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}