#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec1;
    int a, b, c;
    cin >> a >> b >> c;

    int exp1 = a + b * c;
    int exp2 = a * (b + c);
    int exp3 = a * b * c;
    int exp4 = (a + b) * c;
    int exp5 = a + b + c;

    vec1.push_back(exp1);
    vec1.push_back(exp2);
    vec1.push_back(exp3);
    vec1.push_back(exp4);
    vec1.push_back(exp5);

    sort(vec1.begin(), vec1.end());

    cout << vec1[vec1.size() - 1];
    return 0;
}