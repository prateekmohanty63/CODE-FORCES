#include<iostream>

using namespace std;

bool change(int arr[],int n)
{
    if(arr[0]!=25)
        return false;

    int money_clerk=arr[0];
    int flag=0;

    for(int i=1;i<n;i++)
    {
        if(arr[i]!=25)
        {
            int r=arr[i]-25;
            if(r<=money_clerk)
            {
                money_clerk+=arr[i];
                money_clerk-=r;
            }
            else{
                flag=1;
                break;
            }
        }
        else
            money_clerk+=arr[i];
    }

    if(flag==0)
    return true;
    return false;

}


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(change(arr,n))
        cout<<"YES";
    else
        cout<<"NO";
}
