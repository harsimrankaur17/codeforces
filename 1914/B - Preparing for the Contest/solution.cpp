#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x, y;
        cin >> x >> y;
 
        for (int i = 1; i <= y; i++)
        {
            cout << i << " ";
        }
 
        for (int i = x; i > y; i--)
        {
            cout << i << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}