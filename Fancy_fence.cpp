#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)


int main()
{

    int n;
    cin>>n;

    int r=0;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

        // r=360/(180-arr[i]);

    int k=0;
    REP(i,0,n)
    {

        if(arr[i]>=180)
            cout<<"NO"<<endl;

        else if(360/(float)(180-arr[i])-(360/(180-arr[i]))==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
