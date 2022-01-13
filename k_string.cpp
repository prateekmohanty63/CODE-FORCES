#include<iostream>
#include<set>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a;
    string b="";
    string c;
    string d;
    cin>>n>>a;
    c=a;

    int num1[1000],num2[1000];

    sort(a.begin(), a.end());

    // Using unique() method
    auto res = unique(a.begin(), a.end());
     b =string(a.begin(),res);



     int sum1=0;
    for(int i=0;i<b.length();i++)
    {
        int sum=0;
        int e=0;

        for(int j=0;j<c.length();j++)
        {
            if(b[i]==c[j])
                sum++;
        }
       num1[i]=sum;

    }

    int flag=0;

    for(int i=0;i<b.length();i++)
    {
        if(num1[i]%n!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<-1;
     /*else
     {
         for(int i=0;i<n;i++)
         {

         }
     }*/
}
