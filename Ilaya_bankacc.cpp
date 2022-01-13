#include<iostream>

using namespace std;


int main()
{
    string a,b,c;
    cin>>a;

    if(a[0]!='-')
    cout<<a;

    else
    {
        b=a.substr(0,a.length()-1);
        c=a.substr(0,a.length()-2);
        c+=a[a.length()-1];


  //cout<<b<<" "<<c<<endl;

     int e=stoi(b);
     int f=stoi(c);

     if(e>f)
        cout<<e;
     else
        cout<<f;

    }
}
