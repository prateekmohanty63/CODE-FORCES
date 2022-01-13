#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{

    int n,a,b;
    cin>>n>>a>>b;

    int k=0,m=n;

    int pos=0;

    for(int i=1;i<n;i++)
    {
       if(k+i>=a)
       {
           if(m-i<=b)
           {
               pos++;
           }
       }

       else if(m-i<=b)
       {
           if(k+i>=a){
            pos++;
           }
       }
       k+=i;
       m-=i;
    }
    cout<<pos;
}
