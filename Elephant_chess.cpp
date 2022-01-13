#include<iostream>

using namespace std;

void SwapValue(char &a, char &b) {
   char t = a;
   a = b;
   b = t;
}


int main()
{
   char arr[64];

   for(int i=0;i<64;i++)
    cin>>arr[i];

  /* for(int i=0;i<64;i++)
   cout<<arr[i]<<" ";*/

   int k=0;

   for(int i=0;i<63;i++)
   {
       if(i+1%8==0)
        k++;
       if(arr[i]!=arr[i+1])
        continue;

       else if(arr[i]==arr[i+1])
       {
           char temp=arr[8*k-8];
           for(int j=8*k-7;j<(k*8)-1;j++)
           {
               arr[j-1]=arr[j];
           }
           arr[k*8-1]=temp;
       }

   }

   int r=0;

   for(int i=1;i<=64;i++)
   {
       cout<<arr[i]<<" ";
       if(i%8==0)
        cout<<endl;
   }

}
