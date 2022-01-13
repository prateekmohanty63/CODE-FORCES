#include<iostream>

using namespace std;

int lucky(int n)
{

   int temp=n;
   while(temp!=0)
   {
       int r=temp%10;
       if(r!=4 && r!=7){
           return -1;
       }
       temp/=10;
   }
   return 1;

}

int main()
{

    int n;
    cin>>n;

    int flag=0;
    int r=-1;

    for(int i=n;i>0;i--)
    {
         r=n%i;
        if(r==0 && lucky(i)==1 ){
            flag=1;
            break;

        }

    }

    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";


}
