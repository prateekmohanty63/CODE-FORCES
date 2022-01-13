#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)



int main()
{
    int n;
    cin>>n;

    vector<int> vec1;
    int r;

    REP(i,0,n)
    {
        cin>>r;
        vec1.push_back(r);
    }

    sort(vec1.begin(),vec1.end(),greater<int>());


    int no_five=0;
    int no_zero=0;

    REP(i,0,n)
    {
        if(vec1[i]==5)
            no_five++;
        else
            no_zero++;
    }

    if((no_five<9 && no_zero==0) || (no_zero==0))
        cout<<-1;
    else if(no_five<9 && no_zero!=0)
        cout<<0;
    else if(no_five>=9 && no_zero!=0)
    {
            int r=no_five/9;
            int x=abs(9*r-no_five);
        REP(i,x,n)
        {
            cout<<vec1[i];
        }
    }
}
