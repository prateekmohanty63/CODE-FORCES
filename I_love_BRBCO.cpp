#include<iostream>

using namespace std;


int main()
{

    int n;
    cin>>n;
    int arr[100];

    int k;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        arr[i]=k;
    }

   // int max_score=arr[0];

    int break_record=0;
    int r=1;




    for(int i=n-1;i>0;i--)
    {
        int count=0;
        int count1=0;
        for(int j=0;j<n-r;j++)
        {
            if(arr[i]<arr[j])
                count++;

            else if(arr[i]>arr[j])
                count1++;

        }
        if(count==n-1-(r-1) || count1==n-1-(r-1))
            break_record++;
            r++;

    }

    cout<<break_record;

}
