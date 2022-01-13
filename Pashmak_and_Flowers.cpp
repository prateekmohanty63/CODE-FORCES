#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int>vec1;

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        vec1.push_back(r);
    }

    sort(vec1.begin(),vec1.end());
    int max_beauty=vec1[vec1.size()-1]-vec1[0];
    int max_b=vec1[vec1.size()-1];
    int min_b=vec1[0];

    int max_count=0,min_count=0;

    for(int i=0;i<n;i++)
    {
        if(vec1[i]==min_b)
            min_count++;
        else
            break;
    }

    for(int i=vec1.size()-1;i>=0;i--)
    {
        if(vec1[i]==max_b)
            max_count++;
        else
            break;
    }
    cout<<max_beauty<<" "<<(max_count*min_count);
}
