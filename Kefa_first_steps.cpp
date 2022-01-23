#include <iostream>
using namespace std;

int main()
{
    int n, l, res = 1;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i > 0 && arr[i] >= arr[i - 1])
        {
            l++;
            res = max(res, l);
        }
        else
            l = 1;
    }

    cout << res;
    return 0;
}