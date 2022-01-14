
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
            long long b;
            cin>>b;
            vec1.push_back(b);
        }
        
        res.push_back(vec1[0]);
        int k=1;

      for(int i=1;i<vec1.size();i++){
          int tar=vec1[i]-res[i-1];
          int index=binary_search(vec1,0,vec1.size()-1,tar);

           if(k==3)
          break;

          if(index==-1 || index==i-1){
              res.push_back(vec1[i]);
              k++;
          }

         
      }
      for(int i=0;i<res.size();i++)
      cout<<res[i]<<" ";
    }
    
    return 0;
}