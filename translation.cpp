#include<iostream>
#include<vector>
#include<set>

using namespace std;


int main()
{
    string a;
    string b,c;
    cin>>a>>b;



    for(int i=0;i<a.length();i++)
    {
        c+=a[a.length()-1-i];
    }
    if(b==c)
        cout<<"YES";
    else
        cout<<"NO";
}
