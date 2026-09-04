#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        char arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
 
        int a = arr[0] - '0';
        int b = arr[1] - '0';
 
        int num = a * 10 + b;
        int x = num;
        if (num > 12)
        {
            x = num - 12;
        }
 
        if (x < 10)
        {
            arr[0] = '0';
            arr[1] = x + '0';
        }
        else
        {
            arr[0] = x / 10 + '0';
            arr[1] = x % 10 + '0';
        }
 
        if (num == 0)
        {
            arr[0] = '1';
            arr[1] = '2';
        }
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i];
        }
        if (num >= 12)
        {
            cout << " PM" << endl;
        }
        else
        {
            cout << " AM" << endl;
        }
    }
    return 0;
}