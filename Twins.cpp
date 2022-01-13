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

    sort(vec1.begin(),vec1.end(),greater<int>());

    float sum1=0;

    for(int i=0;i<n;i++)
        sum1+=vec1[i];
    sum1/=(float)2;



    int count=0;
    int sum=0;

    if(n==1)
        cout<<1;

    else{
        for(int i=0;i<n;i++)
        {
            sum+=vec1[i];
            count++;
            if(sum>sum1)
                break;
        }
        cout<<count;
    }

}
