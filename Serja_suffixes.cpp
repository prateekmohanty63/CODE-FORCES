#include<iostream>
#include<set>

using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;

    int *arr=new int[n];


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<m;i++)
    {
        set<int>set1;
        int r;
        cin>>r;

        for(int j=r-1;j<n;j++)
            set1.insert(arr[j]);

        cout<<set1.size()<<endl;

    }
}
