#include<iostream>

using namespace std;


int main()
{

      string arr;
    cin>>arr;

    int a=arr.length();

    for(int i=0;i<a;i++)
    {
        if(arr[i]=='.')
        {

            cout<<0;
        }
        else if(arr[i]=='-' && arr[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(arr[i]=='-' && arr[i+1]=='-')
        {


        cout<<2;
        i++;
        }
    }


}
