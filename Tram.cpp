#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;



    int arr[1000][1000];

    vector<int> vec1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[0][i]>>arr[1][i];

    }

    /*for(int i=0;i<n;i++)
    {
        cout<<arr[0][i]<<" ";
        cout<<arr[1][i]<<" ";
        cout<<endl;
    }*/

    int r=0;

    for(int i=0;i<n;i++)
    {
        r+=arr[1][i]-arr[0][i];
        vec1.push_back(r);
    }

    sort(vec1.begin(),vec1.end());

    cout<<vec1[n-1];

}
