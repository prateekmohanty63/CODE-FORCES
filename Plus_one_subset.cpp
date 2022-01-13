#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ans=-1;
       vector<int>vec1;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            vec1.push_back(a);
            sort(vec1.begin(),vec1.end());
            int max=vec1[vec1.size()-1];
            int min=vec1[0];
            ans=max-min;
        }
       cout<<ans<<endl;
    }
    return 0;
}