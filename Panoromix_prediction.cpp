#include<iostream>

using namespace std;

bool prime(int r)
{
    if(r==2)
        return true;
    for(int i=2;i<r;i++)
    {
        if(r%i==0)
        {
           return false;
        }
    }
    return true;
}

int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;

    if(prime(n)==false || prime(m)==false)
    {
        cout<<"NO"<<endl;
    }


    else
    {
        for(int i=n+1;i<m;i++)
        {
            if(prime(i))
                flag=1;
        }

         if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }

}
