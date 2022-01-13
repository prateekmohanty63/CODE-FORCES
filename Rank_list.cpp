#include<iostream>
#include<vector>
#include<map>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;

   int prob[n],time[n];

   for(int i=0;i<n;i++)
   {
       cin>>prob[i]>>time[i];
   }
   int temp=0,temp1=0;

   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(prob[i]<prob[j])
           {
               temp=prob[i];
               temp1=time[i];
               prob[i]=prob[j];
               time[i]=time[j];
               prob[j]=temp;
               time[j]=temp1;
           }

           else if(prob[i]==prob[j] && (time[i]>time[j]))
           {
               temp=prob[i];
               temp1=time[i];
               prob[i]=prob[j];
               time[i]=time[j];
               prob[j]=temp;
               time[j]=temp1;
           }
       }
   }

/*   for(int i=0;i<n;i++)
   {
       cout<<prob[i]<<" "<<time[i]<<endl;
   }*/

    int stime=time[k-1];
    int sprob=prob[k-1];

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(stime==time[i] && sprob==prob[i])
            count++;
    }
   cout<<count;

}
