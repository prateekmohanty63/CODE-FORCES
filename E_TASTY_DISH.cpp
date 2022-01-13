#include<iostream>
#include<map>

using namespace std;


int main()
{

    cout<<"Enter the number of chef's: "<<endl;
    int n;
    cin>>n;
    int r,s;

    map<int,int> skill;

    for(int i=0;i<n;i++)
    {
        cin>>r>>s;
        skill[r]=s;
    }
}
