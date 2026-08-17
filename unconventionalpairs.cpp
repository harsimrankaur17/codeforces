#include <iostream>
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
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + x);
        int max = 0;
        for (int i = 0; i < x; i = i + 2)
        {
            if (arr[i + 1] - arr[i] > max)
            {
                max = arr[i + 1] - arr[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}
