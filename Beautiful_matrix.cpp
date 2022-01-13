#include<iostream>

using namespace std;

int main()
{

    int arr[10][100];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
    }

    int r=0,c=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                r=i+1;
                c=j+1;
            }
        }
    }
    int moves=0;
    moves=abs(3-r)+abs(3-c);
    cout<<moves;
}
