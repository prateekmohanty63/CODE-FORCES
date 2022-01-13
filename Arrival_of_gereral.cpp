#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

   vector<int>vec1(n),vec2(n);
   int  r;

   for(int i=0;i<n;i++)
   {
       cin>>r;
       vec1[i]=r;
   }

   vec2=vec1;


   sort(vec1.begin(),vec1.end());

   int maxim=vec1[vec1.size()-1];
   int minim=vec1[0];

   //cout<<maxim<<" "<<minim<<endl;

   int count=0;

   int ind_max=101;
   int ind_min=-1;

   for(int i=0;i<n;i++)
   {
       if(maxim==vec2[i])
       {
           if(i<ind_max)
           ind_max=i;

       }

       if(minim==vec2[i])
       {
           if(i>ind_min)
            ind_min=i;
       }
   }

   //cout<<ind_max<<endl;
   if(ind_max>ind_min)
   {
       ind_min++;
        cout<<abs(n-(ind_min+1))+ind_max<<endl;
   }

   else{
    cout<<abs((n)-(ind_min+1))+ind_max<<endl;
   }
   //cout<<ind_min<<" "<<ind_max;
}
