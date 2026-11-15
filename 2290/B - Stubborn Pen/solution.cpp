#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int x;
    cin >> x;
 
    while (x--)
    {
        int y;
        cin >> y;
 
        string arr;
        cin >> arr;
 
        int z = 0;
 
        for (int i = 0; i < y - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                z++;
            }
        }
 
        if (arr[0] == 'B')
        {
            cout << z + 1 << '
';
        }
        else
        {
            cout << z << '
';
        }
    }
 
    return 0;
}