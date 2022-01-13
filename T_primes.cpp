#include<iostream>

using namespace std;


bool tprime(int a)
{
    int count=1;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count++;
            if(count>3){
                return  false;
            }
        }
    }

    if(count==3)
    return true;

    return false;
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
