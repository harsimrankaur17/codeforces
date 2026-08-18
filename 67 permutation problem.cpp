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
        int x = 1;
        int y = 3 * n - 1;
        int z = 3 * n;

        while (n--)
        {

            cout << x << " " << y << " " << z << " ";
            y = y - 2;
            z = z - 2;
            x++;
        }
        cout << endl;
    }

    return 0;
}
