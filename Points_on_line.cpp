#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;

    vector<int>vec1;


    for(int i=0;i<n;i++)
        {
            int r;
            cin>>r;
            vec1.push_back(r);
        }

    sort(vec1.begin(),vec1.end());

    long long int count=0;


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec1[j]-vec1[i]<=d && j-i>=2)
            {
                count+=(j-i+1);
            }
            else if(abs(vec1[i]-vec1[j])>d)
                break;
        }
    }
    cout<<count;
}
