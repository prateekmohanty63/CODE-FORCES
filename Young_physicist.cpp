#include<iostream>

using namespace std;

int main()
{

     int n;
     cin>>n;

     int count=0;
     int arr[100][100];

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<3;j++)
            cin>>arr[i][j];
     }

   int sum1=0;
   for(int i=0;i<3;i++)
   {
       int sum=0;
       for(int j=0;j<n;j++)
       {
           sum+=arr[j][i];
       }
       if(sum==0)
        sum1++;
   }
   if(sum1==3)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
