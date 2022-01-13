#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{

    string a;
    cin>>a;

    vector<int> vec1;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]!='+')
            vec1.push_back(int(a[i])-48);
    }

     sort(vec1.begin(),vec1.end());



    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i];

        if(i!=vec1.size()-1)
            cout<<"+";
    }
}
