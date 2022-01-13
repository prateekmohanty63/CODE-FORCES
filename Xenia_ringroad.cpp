#include<iostream>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    int arr[m];

    for(int i=0;i<m;i++)
        cin>>arr[i];


    long long int count_time=arr[0]-1;

    for(int i=0;i<m-1;i++)
    {
        if(arr[i]-arr[i+1]<=0)
            count_time+=abs(arr[i]-arr[i+1]);

        else if(arr[i]-arr[i+1]>0)
             count_time+=((n-arr[i])+arr[i+1]);


    }

    /*if(arr[m-1]-arr[m-2]>0)
        count_time+=(arr[m-1]-arr[m-2]);

    else if(arr[m-1]-arr[m-2]<0)
        count_time+=((n-arr[m-2])+arr[m-1]);*/

    cout<<count_time;

    return 0;
}
