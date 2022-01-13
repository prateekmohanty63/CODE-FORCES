#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int positive[n];
    int negative[n];

    int a=0,b=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            positive[a++]=arr[i];
        else
            negative[b++]=arr[i];
    }

    int e=0,f=0;

    int size1=sizeof(positive)/sizeof(positive[0]);
    int size2=sizeof(negative)/sizeof(negative[0]);

    for(int i=0;i<n;i++)
    {
        if(size1>0)
        {
            arr[i]=positive[e++];
            size1--;
            i++;
        }
        if(size2>0)
        {
            arr[i]=negative[f++];
            size2--;

        }
    }

    /*while(e!=size1)
    {
        arr[i++]=positive[e++];
    }
    while(f!=size2)
    {
        arr[i++]=negative[f++];
    }*/

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
