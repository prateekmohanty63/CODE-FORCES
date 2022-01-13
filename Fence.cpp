#include<iostream>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    int index=-1;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int minim=999999;

    for(int i=0;i<n-(k-1);i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum+=arr[j];
        }
        if(sum<minim)
        {
            index=i+1;
            minim=sum;
        }
    }
    cout<<index;
}
