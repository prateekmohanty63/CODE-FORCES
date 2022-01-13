#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
     int maxim=-1;


    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=n-1;j>=i;j--)
        {
            if(arr[j]==0){
                sum++;
            }
            else if(arr[j]==1 && j<n-1 && j>i)
                continue;
            else
                sum++;
            if(sum>maxim)
                maxim=sum;
        }
    }
    cout<<maxim;
}
