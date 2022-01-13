#include<iostream>


using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int count=0;
    int r=arr[k-1];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=r && arr[i]>0)
            count++;
        else if(arr[i]<r)
            break;
    }
    cout<<count;
}
