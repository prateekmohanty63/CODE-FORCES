#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;

    vector<int>vec1;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        vec1.push_back(k);
    }

    int count=0;
    int r=vec1.size();
    sort(vec1.begin(),vec1.end(),greater<int>());

    for(int i=0;i<r-1;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            if(vec1[i]>=2*vec1[j] && vec1[j]>0)
            {
                vec1[j]=-1;
                vec1[i]=0;
                break;
            }
        }

    }

    for(int i=0;i<r;i++)
    {
        if(vec1[i]>=0)
            count++;
    }
    cout<<count;
}
