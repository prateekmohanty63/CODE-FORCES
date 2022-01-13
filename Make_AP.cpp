#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
         int flag=-1;

         int e=a+c;
          int f=2*b;
         if(e==f){
             cout<<"YES"<<endl;
         }
          else if(f<e){
              
              if(e%f==0)
              cout<<"YES"<<endl;
              else
              cout<<"NO"<<endl;
          }
          else if(f>e){
             if((f-a)%c==0)
             cout<<"YES"<<endl;
             else if((f-c)%a==0)
             cout<<"YES"<<endl;
             else
             cout<<"NO"<<endl;
          }

    }
}