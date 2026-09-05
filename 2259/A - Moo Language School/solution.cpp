#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int sum = 0;
 
        for (int i = 0; i < n; i += k)
        {
            bool hasZero = false;
 
            for (int j = i; j < i + k; j++)
            {
                if (s[j] == '0')
                {
                    hasZero = true;
                    break;
                }
            }
 
            if (hasZero == false)
            {
                sum++;
            }
        }
 
        cout << sum << endl;
    }
 
    return 0;
}