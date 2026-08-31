#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int a = arr[0] + arr[1];
        int b = arr[2] - arr[1];
        int c = arr[3] - arr[2];
        if (a == b && b == c)
        {
            cout << 3 << endl;
        }
        else if (a == b || b == c || a==c)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
 
    return 0;
}