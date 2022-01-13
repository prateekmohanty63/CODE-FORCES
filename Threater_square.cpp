#include<iostream>

using namespace std;

int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;

    int count=0;
    long long int b=max(n,m);
    long long int c=min(n,m);
    int k=0;
    long long int f=0;

    if(a>=max(n,m)){

        cout<<1;
    }
    else if(a==1){
            f=n*m;
    cout<<f;
    }
    else{
    while(c>0)
    {
        count++;
        c-=a;

    }
    cout<<count*2;
    }
}
