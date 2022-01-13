#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    string a;
    string b;
    cin>>a>>b;

     transform(a.begin(), a.end(), a.begin(), ::tolower);
     transform(b.begin(), b.end(), b.begin(), ::tolower);

    int num1=0;
    int num2=0;
    int count=0;
    for(int i=0;i<a.length();i++)
        {
            int e=a[i]-'0';
            int f=b[i]-'0';

            if(e>f)
                count++;
            else if(e<f)
                count--;
        }

   if(count==0)
    cout<<0;
   else if(count>0)
    cout<<1;
   else
    cout<<-1;
}
