#include<iostream>

using namespace std;


int main()
{
    int n,h;
    cin>>n>>h;

    int count=0;

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        if(r>h)
            count++;
    }
    cout<<(n-count)+count*2;
}
