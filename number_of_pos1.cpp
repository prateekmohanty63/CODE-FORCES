#include<iostream>
#include<vector>
#include<set>

using namespace std;


int main()
{

    int a,b,n;
    cin>>n>>a>>b;
    int k=0;
    int m=n;
    int pos=0;

    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=1;j--)
        {
            if(k+i>=a)
            {
                if(m-j<=b && i<j)
                {
                    pos++;
                    i++;
                }
            }
        }
    }
    cout<<pos;
}
