#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

long long int factorial(int n) {
    long long int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    cin>>n;
   
    int class1_same=0,class2_same=0;
    vector<string>vec1;

    vector<string>classroom1,classroom2;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;

        vec1.push_back(a);
    }

      classroom1.push_back(vec1[0]);
    for(int i=1;i<n;i++){
        int count1=0,count2=0;
        string curr=vec1[i];
        for(int j=0;j<classroom1.size();j++){
            if(classroom1[j][0]==curr[0]){
                count1++;
            }
        }

        for(int j=0;j<classroom2.size();j++){
            if(classroom2[j][0]==curr[0])
            {
                count2++;
            }
        }

        if(count1<=count2){
        classroom1.push_back(curr);
        }
        else{
        classroom2.push_back(curr);
        }
    }

//     cout<<"People in classroom-1: ";
//     for(int i=0;i<classroom1.size();i++){
//         cout<<classroom1[i]<<" ";
//     }
//    cout<<endl;

//    cout<<"People in classroom-2: ";
//     for(int i=0;i<classroom2.size();i++){
//         cout<<classroom2[i]<<" ";
//     }
     
   long long int res=0;
    map<char,int>map1;
    map<char,int>map2;

    for(int i=0;i<classroom1.size();i++){
        char e=classroom1[i][0];
        map1[e]++;
    }
     for(int i=0;i<classroom2.size();i++){
        char e=classroom2[i][0];
        map2[e]++;
    }

    map<char,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++){
        if(itr->second>=2){
            res+=nCr(itr->second,2);
        }
    }
     for(itr=map2.begin();itr!=map2.end();itr++){
        if(itr->second>=2){
            res+=nCr(itr->second,2);
        }
    }
  
    cout<<res;
    return 0;
}