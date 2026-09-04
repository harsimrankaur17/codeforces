#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            for (int r = 0; r < 2; r++)
            {
                if (j % 2 != 0)
                {
                    for (int i = 1; i <= x; i++)
                    {
                        if (i % 2 == 0)
                        {
                            for (int s = 0; s < 2; s++)
                                cout << '.';
                        }
                        else
                        {
                            for (int s = 0; s < 2; s++)
                                cout << '#';
                        }
                    }
                }
                else
                {
                    for (int i = 1; i <= x; i++)
                    {
                        if (i % 2 == 0)
                        {
                            for (int s = 0; s < 2; s++)
                                cout << '#';
                        }
                        else
                        {
                            for (int s = 0; s < 2; s++)
                                cout << '.';
                        }
                    }
                }
 
                cout << endl;
            }
        }
    }
    return 0;
}