#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;

    float per=(x/(float)n)*100;
    //cout<<per;

    if(per>=y)
        cout<<0;
    else if(per<y)
    {
        int r=y-per;
        int x=r*n;
        cout<<x;
    }

}
