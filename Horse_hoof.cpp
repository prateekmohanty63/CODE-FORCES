#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;


int main()
{

   set<int> set1;

   int k;

   for(int i=0;i<4;i++)
   {
       cin>>k;
       set1.insert(k);
   }

   cout<<4-set1.size();
}

