#include<iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    long int price=0;

    for(int i=1;i<=w;i++)
    {
        price+=i*k;
    }

    if(price<n)
        cout<<0;
   else
    cout<<price-n;
}
