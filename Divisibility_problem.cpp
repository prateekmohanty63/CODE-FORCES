#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a%b!=0)
        cout<<abs((a/b+1)*b -a)<<endl;
        else if(a%b==0)
        cout<<0<<endl;
    }
}
