#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>vec1;
    int x;
    cin>>x;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        vec1.push_back(r);
    }
    int first=0,last=n-1;
    int max=999999;

    for(int i=0;i<n;i++){
            int sum=vec1[i];
        for(int j=i+1;j<n;j++){
            sum+=vec1[j];
             if(sum>x){
                    if(j-i<max){
                first=i;
                last=j;
                    }
                    break;
             }
        }
    }
    cout<<"The subarray is:"<<endl;
    for(int i=first;i<last;i++){
        cout<<vec1[i]<<" ";
    }

}
