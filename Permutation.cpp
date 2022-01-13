#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int *arr;
    arr=(int *)calloc(5000,sizeof(int));

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        arr[r-1]=r;
    }
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count++;
    }
    cout<<count;
}
