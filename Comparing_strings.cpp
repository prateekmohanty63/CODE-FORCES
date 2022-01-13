#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>

using namespace std;


int main()
{

    string a,b;
    cin>>a>>b;

    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);

    //cout<<a<<" "<<b<<endl;

     sort(a.begin(),a.end());
     sort(b.begin(),b.end());

     //cout<<a<<" "<<b;

     int r=0;
     int k=0;

     for(int i=0;i<a.length();i++)
     {
         if(a[i]>b[i])
            r++;
         else if(a[i]<b[i])
            r--;
        else
            continue;
     }

    /* for(int i=0;i<a.length();i++)
        r+=(int)a[i];


     for(int i=0;i<a.length();i++)
        k+=(int)b[i];*/


        cout<<r<<endl;
     if(r>=1)
        cout<<1;

     else if(r<1 && r!=0)
        cout<<-1;
     else
        cout<<0;


}

