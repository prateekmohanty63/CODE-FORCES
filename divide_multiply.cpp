#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0,x=0,mx=0;
        cin>>n;
       long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            while(a[i]%2==0){
                 x++;
                 a[i]/=2;
            }
            mx=max(mx,a[i]);
            sum+=a[i];
        }
         sum-=mx;
         cout<<sum+mx*(long long)pow(2,x)<<endl;
        }
    
    return 0;
}