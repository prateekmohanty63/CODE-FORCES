#include<iostream>
#include<set>
#include<vector>
#include<algorithm>


using namespace std;


int main()
{

    string a,b,c;

    cin>>a>>b>>c;

    string full_name=a+b;
   // cout<<full_name;

    vector<char>vec1,vec2;

    for(int i=0;i<full_name.length();i++)
    {
        vec1.push_back(full_name[i]);
    }


    for(int i=0;i<c.length();i++)
    {
        vec2.push_back(c[i]);
    }



    //cout<<full_name.length()<<" "<<c.length();

    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());


    /*for(int i=0;i<full_name.length();i++)
    {
        cout<<full_name[i];
    }

    cout<<endl;
      for(int i=0;i<c.length();i++)
    {
        cout<<c[i];
    }*/

    if(vec1==vec2)
        cout<<"YES";
    else
        cout<<"NO";


  /*  if(full_name.length()!=c.length())
    {
        cout<<"NO"<<endl;
    }
    else if(full_name.length()==c.length(){

          int flag=0;

          for(int i=0;i<full_name.length();i++)
          {

              if(full_name[i]!=)
          }
    }*/
}
