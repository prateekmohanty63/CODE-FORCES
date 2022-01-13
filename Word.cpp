
#include <bits/stdc++.h>
using namespace std;

string touplow(string a,int b,int c)
{
    if(b>c)
    {
        transform(a.begin(),a.end(),a.begin(), :: toupper);
    }
    else
    {
        transform(a.begin(),a.end(),a.begin(),:: tolower);
    }
    return a;
}


int main()
{
    string word;
    cin>>word;

    int lower_count=0,high_count=0;


    int a=word.length();

    for(int i=0;i<a;i++)
    {
        if(word[i]>=65 && word[i]<=90)
            high_count++;
        else if(word[i]>=97 && word[i]<=122)
            lower_count++;
    }

    //cout<<high_count<<" "<<lower_count<<endl;


       string k=touplow(word,high_count,lower_count);
       cout<<k;
}
