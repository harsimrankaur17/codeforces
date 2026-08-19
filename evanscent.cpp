#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int y = 0;
        int z = 0;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i - 1] != s[i] && s[i] != s[i + 1] && s[i - 1] == s[i + 1])
            {
                s.erase(i, 1);
                y++;
                break;
            }
        }
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i - 1] != s[i] && s[i] != s[i + 1] && y == 0)
            {
                s.erase(i, 1);
                break;
            }
        }

        int blocks = 1;

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
            {
                blocks++;
            }
        }
        cout << blocks << endl;
    }

    return 0;
}
