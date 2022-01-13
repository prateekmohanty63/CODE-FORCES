#include<iostream>
#include<algorithm>

using namespace std;

bool palindrome(string d)
{
    string e="";
    for(int i=d.length()-1;i>=0;i--)
        e+=d[i];
    if(e==d)
        return true;
    return false;
}


int main()
{
    string a;
    cin>>a;

    sort(a.begin(),a.end());

    string d=a;

    int flag=0;
    int i=1;
    string e;
    int count=0;

    while(flag!=1)
    {
        e=d.substr(0,a.length()-i);
        i++;
        count++;
        if(palindrome(e))
            flag=1;

    }

    if(count%2==0)
        cout<<"Second";
    else
        cout<<"First";

}
