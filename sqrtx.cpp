class Solution
{
public:
    int mySqrt(int x)
    {
        int y = 0;
        for (long long i = 1; i <= x; i++)
        {
            if (i * i <= x)
            {
                y = i;
            }
            if (i * i >= x)
            {
                break;
            }
        }
        return y;
    }
};