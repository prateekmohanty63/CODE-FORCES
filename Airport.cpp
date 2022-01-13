#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int no_passangers,no_plane;
    cin>>no_passangers>>no_plane;

    vector<int>vec1,vec2;

    for(int i=0;i<no_plane;i++)
        {
            int r;
            cin>>r;
            vec1.push_back(r);
        }

        vec2=vec1;
        sort(vec1.begin(),vec1.end(),greater<int>());
        sort(vec2.begin(),vec2.end());

    int max_sell=0,min_sell=0;


    for(int i=0;i<no_passangers;i++)
    {
        max_sell+=vec1[0];
        vec1[0]=vec1[0]-1;
         sort(vec1.begin(),vec1.end(),greater<int>());
    }
    int k=0;

    for(int i=0;i<no_passangers;i++)
    {
        if(vec2[k]>0)
        {
            min_sell+=vec2[k];
            vec2[k]--;
        }
        else if(vec2[k]<=0)
        {
            k++;
            min_sell+=vec2[k];
            vec2[k]--;
        }

    }

    cout<<max_sell<<" "<<min_sell;


}
