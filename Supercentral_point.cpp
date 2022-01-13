#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;


int main()
{

    int no_points;
    cin>>points;

    int arr[no_points][2];

    for(int i=0;i<no_points;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

    int count=0;

    int res[no_points];

    int setx[100],sety[100];

    for(int i=0;i<no_points;i++)
    {
        setx.insert(arr[i][0]);
    }

    for(int i=0;i<no_points;i++)
        sety.insert(arr[i][1]);



}
