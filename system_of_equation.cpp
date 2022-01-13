#include<iostream>
#include<vector>
#include<set>
#include<math.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    /// a^2 + b=n
    /// a + b^2=m

    int count=0;

    int a=0,b=0;

    if(n<=m)
    {

        for(int i=0;i<sqrt(n);i++)
        {
            a=i;
            b=n-i*i;
            if((b*b+(a))==m)
                count++;
        }

    }

    else{
        for(int i=0;i<sqrt(m);i++)
        {
            b=i;
            a=m-i*i;

            if((a*a + b)==n)
                count++;
        }
    }
    cout<<count;
}
