#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    vector<int>vec1;

    for(int i=0;i<m;i++)
    {
        int r;
        cin>>r;
        vec1.push_back(r);
    }

    sort(vec1.begin(),vec1.end());


}
