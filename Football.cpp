#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string>vec1;

    set<string>set1;
    string a;

    int team1=0,team2=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec1.push_back(a);
    }

   sort(vec1.begin(),vec1.end());
   string p=vec1[0],r;

   for(int i=0;i<n;i++)
   {
       if(vec1[i]==p)
        team1++;

        else{
              r=vec1[i];
            break;

   }
  team2=n-team1;
}

 if(team1>team2)
    cout<<p;

    else
        cout<<r;
}
