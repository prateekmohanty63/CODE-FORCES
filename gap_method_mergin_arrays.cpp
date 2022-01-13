#include<iostream>

#include <cmath>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    int arr[n],arr1[m];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int j=0;j<m;j++)
        cin>>arr1[j];

    int gap=ceil((n+m)/2);
    int start=0;

    while(gap!=1)
    {
        int emd=gap;
        if(emd<n)
        {

            int r=arr[emd];


            if(r<arr[start])
            {
                swap(r,arr[start]);
            }
            if(emd>n+m)
            {
                gap/=2;
            }
             start++;
            emd++;
        }
        else if(emd>n)
        {
            int k=arr1[emd];
            int l=arr[start];


             if(start>=n)
                l=arr1[start];
            if(k<l)
            {
                swap(k,l);
            }
            if(emd>n+m)
            {
                gap/=2;
            }
            start++;
            emd++;

        }
        gap/=2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<m;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
