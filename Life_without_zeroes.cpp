#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
     long long int a,b;

     cin>>a>>b;
     int c=a+b;

     string e=to_string(a);
     string f=to_string(b);
     string g=to_string(c);

     string l,m,n;

     for(int i=0;i<e.length();i++)
     {
         if(e[i]!='0')
            l+=e[i];
     }


     for(int i=0;i<f.length();i++)
     {
         if(f[i]!='0')
            m+=f[i];
     }

     for(int i=0;i<g.length();i++)
     {
         if(g[i]!='0')
            n+=g[i];
     }

     if(stoi(l)+stoi(m)==stoi(n))
        cout<<"YES";
     else
        cout<<"NO";
}

