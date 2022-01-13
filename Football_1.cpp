#include<iostream>

using namespace std;


int main()
{
    string n;
    cin>>n;

    int a=n.length();

     int count=0;

     for(int i=0;i<a-1;i++)
     {
         if(n[i]==n[i+1])
            count++;
         else if(n[i]!=n[i+1])
            count=0;
         if(count>=6)
            break;
     }

     if(count>=6)
        cout<<"YES";
     else
        cout<<"NO";
}
