#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<long long>vec1,int l,int r,int target){

    int mid=l+(r-l)/2;

    if(vec1[mid]==target) return mid;

    if(target<vec1[mid]){
        binary_search(vec1,l,mid-1,target);
    }

    if(target>vec1[mid]){
        binary_search(vec1,mid+1,r,target);
    }

    return -1;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        
        vector<long long>vec1;
        vector<long long>res;

        for(int i=0;i<7;i++){
            long long a;
            cin>>a;
            vec1.push_back(a);
        }
        res.push_back(vec1[0]);
        res.push_back(vec1[1]);

        int a=res[0]+res[1];
        
        if(a==vec1[2])
        res.push_back(vec1[3]);
        else{
            res.push_back(vec1[2]);
        }

        
     for(int i=0;i<3;i++)
     cout<<res[i]<<" ";
     cout<<endl;

    }
    return 0;
}