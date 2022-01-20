#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec1.push_back(a);
        }

        vector<int>::iterator itr;
        int k = 0;
        sort(vec1.begin(), vec1.end());
        for (int i = 0; i < n - 1; i++)
        {
            int a = vec1[i], b = vec1[i + 1];

            if (a != b)
            {
                if (k == n / 2)
                    break;
                itr = find(vec1.begin(), vec1.end(), b % a);
                if (itr == vec1.end())
                {
                    k++;
                    cout << b << " " << a << endl;
                }
            }
        }
    }
    return 0;
}