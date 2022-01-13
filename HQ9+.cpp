#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    string a;
    cin>>a;

    int flag=0;


    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='H'|| a[i]=='Q' || a[i]=='9' || a[i]=='+')
            flag=1;
    }

    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}
