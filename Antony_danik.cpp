#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a_count=0,d_count=0;

    for(int i=0;i<n;i++){
        char k;
        cin>>k;
        if(k=='A')
        a_count++;
        else
        d_count++;
    }

    if(a_count==d_count)
    cout<<"Friendship";
    else if(a_count>d_count)
    cout<<"Anton";
    else
    cout<<"Danik";
}