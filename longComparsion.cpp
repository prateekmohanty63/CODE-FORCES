#include <bits/stdc++.h>

#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define Long_MAX_VALUE 0x7fffffffffffffffL
#define Long_MIN_VALUE 0x8000000000000000L

using namespace std;

struct Solution
{
    void run()
    {
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        while (get_bits(x1) > get_bits(x2))
        {
            x2 *= 10;
            p2--;
        }
        while (get_bits(x1) < get_bits(x2))
        {
            x1 *= 10;
            p1--;
        }

        if (p1 > p2)
        {
            cout << '>' << endl;
        }
        else if (p1 < p2)
        {
            cout << '<' << endl;
        }
        else if (x1 > x2)
        {
            cout << '>' << endl;
        }
        else if (x1 < x2)
        {
            cout << '<' << endl;
        }
        else
        {
            cout << '=' << endl;
        }
    }

    int get_bits(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            ans++;
            x /= 10;
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    Solution solution = Solution();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}