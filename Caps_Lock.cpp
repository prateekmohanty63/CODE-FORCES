#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, res;
    cin >> a;
    res = a;

    string uppercase = a;
    transform(uppercase.begin(), uppercase.end(), uppercase.begin(), ::toupper);

    if (a == uppercase)
    {
        transform(res.begin(), res.end(), res.begin(), ::tolower);
    }
    else if (a[0] >= 97 && a[0] <= 122)
    {
        string b = a.substr(1, a.size() - 1);
        string c = b;
        transform(b.begin(), b.end(), b.begin(), ::toupper);

        if (b == c)
        {

            res[0] = res[0] - 32;
            for (int i = 1; i < a.size(); i++)
            {
                res[i] = res[i] + 32;
            }
        }
    }

    cout << res;
    return 0;
}