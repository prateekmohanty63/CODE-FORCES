#include<iostream>
#include<vector>
#include<algorithm>

using namespace  std;

int main()
{
    int n;
    cin>>n;

    string r[1000];

    for(int i=0;i<n;i++)
    {
        cin>>r[i];
    }

    int x=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r[i].length()-1;j++)
        {
            if(r[i][j]=='+' && r[i][j+1]=='+')
                x++;

            else if(r[i][j]=='-' && r[i][j+1]=='-')
                x--;
        }
    }
    cout<<x;
}
