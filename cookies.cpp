#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int count=0;

    int sum=0;

    for(int i=0;i<n;i++)
        sum+=arr[i];

    if(sum%2==0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                count++;
        }
    }

    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
                count++;
        }
    }
    cout<<count;
}
