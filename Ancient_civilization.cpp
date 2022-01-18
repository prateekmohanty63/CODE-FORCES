#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, l;
        cin >> n >> l;
        int ans = 0;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < l; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {

                if (a[j] & (1 << i))
                    count++;
            }

            if (count > n - count)
                ans += (1 << i);
        }
        cout << ans << endl;
    }

    return 0;
}