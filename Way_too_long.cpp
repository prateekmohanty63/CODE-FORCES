#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;


int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;

        if(a.length()<=10)
            cout<<a;
        else{
            int e=a.length()-2;
            cout<<a[0]<<e<<a[a.length()-1];
        }
         cout<<endl;
    }

}
