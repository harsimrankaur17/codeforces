#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
