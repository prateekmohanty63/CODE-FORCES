#include<iostream>
#include<vector>
#include<stack>
#include<set>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int> vec1,vec2;

    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        vec1.push_back(r);
    }

    vec2=vec1;

    sort(vec1.begin(),vec1.end());

    if(vec1[0]==vec1[1])
        cout<<"Still Rozdil";


    else{
        int x=vec1[0];
    for(int i=0;i<n;i++)
    {
        if(x==vec2[i]){
            cout<<i+1;
            break;
        }
    }
    }


}
