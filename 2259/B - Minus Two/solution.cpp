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
 
        int odd = 0;
        int even0 = 0;
        int even2 = 0;
 
        for (int i = 0; i < x; i++)
        {
            if (arr[i] % 2 != 0)
            {
                odd++;
            }
            else if (arr[i] % 4 == 0)
            {
                even0++;
            }
            else
            {
                even2++;
            }
        }
 
        cout << max(odd, max(even0, even2)) << endl;
    }
 
    return 0;
}