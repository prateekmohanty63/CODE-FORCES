#include<iostream>

using namespace std;


int main()
{
        string a;
        cin>>a;
        int flag=0;
        int count=0;

    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]==a[i+1])
            count++;
        else{
            count=0;
        }
        if(count>=6)
            flag=1;
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}
