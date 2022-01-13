#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool tprime(long int a)
{
    float b=sqrt(a);

    if(b!=(int)b)
    return false;
    int e=sqrt(a);

    int count=0;
    if(e!=2 && e%2==0)
        return false;
    if(e==2 || e==3)
        return true;

    for(int i=4;i<=e/2;i++)
    {
        if(e%i==0)
        return false;

    }

    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        if(tprime(r))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
