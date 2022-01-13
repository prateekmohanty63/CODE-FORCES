#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;

   int b[1000],d[n];
   int k=0,i=1;


   for(int i=0;i<n;i++)
    cin>>d[i];

   while(k!=1000)
   {
       if(i%3!=0 && i%10!=3)
       {
           b[k++]=i;

       }
        i++;
   }

   for(int i=0;i<n;i++)
   {
      cout<<b[d[i]-1]<<endl;
   }
}
