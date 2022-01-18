#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;



    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        /// if n is even then the tree numbers would be 
        /// n-3 is always odd
        /// 2 is even
        /// gcd of odd and even number is 1
        /// (n-3)+1+2==n
      
      if(a%2==0){
          cout<<n-3<<2<<1<<endl;
      }
      else{
          
      }
    }
    return 0;
}