#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;


int main()
{
    string a;
    cin>>a;


    int r=a.length();

    bool first=false;

    for(int i=0;i<r;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            if(first)cout<<" ";
            i+=2;
        }
        else{
            first=true;
            cout<<a[i];
        }
    }

}
