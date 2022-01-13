#include<iostream>
#include<vector>
#include<algorithm>
#include<set>


using namespace std;


int main()
{
    string user_name;
    cin>>user_name;

    set<char> set1;

    for(int i=0;i<user_name.size();i++)
    {
        set1.insert(user_name[i]);
    }

    if(set1.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}
