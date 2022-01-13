#include<iostream>
#include<vector>

using namespace std;


int main()
{
    string a;
    cin>>a;

    int r=a.length();
    int flag=0;



     if((a[1]!='1' && a[0]!='1') || (a[0]!='1' && a[1]!='4'))
        flag=1;


    for(int i=0;i<r;i++)
    {
        if(a[i]!='1' || a[i]!='4')
            flag=1;
    }

    for(int i=2;i<r;i++)
    {
        if(a[i]=='4')
           {
               if((a[i-1]=='1' && a[i-2]!='1') || (a[i-1]=='4' && a[i-2]=='1'))
               {
                   continue;
               }
               else{
                flag=1;
               }
           }
    }

    cout<<flag;
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
}
