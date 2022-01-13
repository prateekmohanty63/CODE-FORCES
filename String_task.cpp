#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int vowel(char a)
{

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y')
        return 1;
    return -1;
}

int main()
{
   // cout<<vowel('y')<<endl;
    string a;
    cin>>a;


    transform(a.begin(), a.end(), a.begin(), ::tolower);
    string res,res1;
    for(int i=0;i<a.size();i++)
    {
        if(vowel(a[i])!=1)
            res+=a[i];
    }
    //cout<<res<<endl;
    for(int i=0;i<res.size();i++)
    {
        res1+='.';
        res1+=res[i];
    }
    cout<<res1;
}
