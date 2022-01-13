#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int arr[1000][3];

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }

    int res=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
                count++;

        }
        if(count>=2)
            res++;
    }

    cout<<res;
}
