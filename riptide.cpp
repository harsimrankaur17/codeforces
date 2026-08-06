#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        int a, b, c;
        cin >> a >> b >> c;
        while (a != b && a != c && b != c)
        {

            if (a >= b && a >= c)
                a--;
            else if (b >= a && b >= c)
                b--;
            else
                c--;

            if (a <= b && a <= c)
                a++;
            else if (b <= a && b <= c)
                b++;
            else
                c++;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
