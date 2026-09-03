#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int x[n];
        int j = 0;
 
        for (int k = 0; k < n; k++)
        {
            char a[4];
 
            for (int i = 0; i < 4; i++)
            {
                cin >> a[i];
            }
 
            for (int i = 0; i < 4; i++)
            {
                if (a[i] == '#')
                {
                    x[j] = i + 1;
                    j++;
                }
            }
        }
 
        for (int i = n - 1; i >= 0; i--)
        {
            cout << x[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}