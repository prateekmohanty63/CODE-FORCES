#include<iostream>
#include<string>
#include<set>

using namespace std;

bool beaut_num(int x,int r)
{
    string a=to_string(x);
    set<char>set1;

    for(int i=0;i<a.length();i++)
        set1.insert(a[i]);

    if(set1.size()==r)
        return true;

    return false;
}

using namespace std;

int main()
{
    int n;
    cin>>n;

   for(int i=0;i<n;i++)
   {
       long int a;
       int b;
       cin>>a>>b;
       if(beaut_num(a,b))
        cout<<a<<endl;

       else{
             while(!beaut_num(a,b))
             {
               a++;

             }
              cout<<a<<endl;
       }
   }

}
