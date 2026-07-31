#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        string k=s;
        for (int l = 0; l < s.length(); l++)
        {
            k[s.length() - 1 - l] = s[l];
        }
        for (int j = 0; j < s.length(); j++)
        {
            if (k[j] == 'p')
            {
                cout << 'q';
            }
            else if (k[j] == 'q')
            {
                cout << 'p';
            }
            else
            {
                cout << k[j];
            }
        }
        cout << endl;
    }
    return 0;
}
