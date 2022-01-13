#include<iostream>
#include<vector>

using namespace std;

void shift(vector<int>&arr,int i,int d)
{
    int n=size(arr);
    vector<int>temp(size(arr),0);
       int start=i;
        int  rem=size(arr)-i;

        for(;i<n;i++){
          temp[(i-d+rem+rem)%rem]=arr[i];
        }
        for(int i=0;i<k;i++)
            arr[k]=temp[k];


}

int main()
{
    int t;
    cin>>t;
    vector<pair<pair<int,int>,int>>ans;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
        {
            pair<int,int>p={arr[i],i};
            for(int j=i;j<n;j++)
            {
                p=min(p,{arr[j],j});
            }
            if(p.ff==arr[i])
                continue;
            shift(arr,i,p.ss-i);
            ans.pb({i+1,p.ss+1,p.ss-i});
        }
        for(auto i:ans)
        {
            cout<<i.ff.ff<<"  "<<i.ff.ss<<" "<<i.ss<<endl;
        }

    }
}
