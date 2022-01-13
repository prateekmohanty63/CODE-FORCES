#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int hour,min;
        cin>>hour>>min;
        int x=(23-hour)*60+(60-min);
        cout<<x<<endl;
    }
}