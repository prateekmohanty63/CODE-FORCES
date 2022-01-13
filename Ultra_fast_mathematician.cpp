#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
   string n,m;
   cin>>n>>m;



   int arr[100];
   int r;
   r=m.length();

   for(int i=0;i<r;i++)
   {

       if(n[i]==m[i])
        arr[i]=0;
       else
        arr[i]=1;

   }

   for(int i=0;i<r;i++)
    cout<<arr[i];

}
