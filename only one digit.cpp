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
        string s = to_string(n);
        char sum = '9';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < sum)
            {
                sum = s[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
