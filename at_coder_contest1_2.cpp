#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define REP(i,a,b) for(int i=a;i<b;i++)

using namespace std;


int main()
{

    vector<int>vec1,vec2;
    int n;
    cin>>n;

    REP(i,0,n)
    {
        int x;
        cin>>x;
        vec1.push_back(x);
    }

    vec2=vec1;

    sort(vec1.begin(),vec1.end());

    int r=vec1[n-2];

    int index=-1;

    for(int i=0;i<n;i++)
    {
        if(vec2[i]==r){
            cout<<i+1;
            break;
        }
    }




}
