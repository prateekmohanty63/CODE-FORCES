#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;

        sort(a.begin(), a.end());
        cout << a << endl;
    }
    return 0;
}