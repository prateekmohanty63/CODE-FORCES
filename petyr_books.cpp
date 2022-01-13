#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int no_pages;
    cin>>no_pages;

    int arr[7];

    for(int i=0;i<7;i++)
        cin>>arr[i];

    int k=no_pages;
    int count=0;
     int i=0;

    while(k>0)
    {
        k=k-arr[i];

        count++;
        i++;

        if(i==7)
            i=0;
    }




    if(count<=7)
    cout<<count;

    else if(count>7 && count%7==0)
        cout<<7;

    else if(count>7 && count%7!=0)
        cout<<count%7;

}
