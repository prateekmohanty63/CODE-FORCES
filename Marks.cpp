#include<iostream>
#include<set>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    set<int>set1;

    string marks[n];

    for(int i=0;i<n;i++)
        cin>>marks[i];

        int count=0;
        int max1=-1;
    if(m==1)
    {
        for(int i=0;i<n;i++)
            {
                if(marks[0][i]-'0'>max1)
                    max1=marks[0][i]-'0';
            }

            for(int j=0;j<n;j++)
            {
                if(marks[0][j]-'0'==max1)
                    count++;
            }
            cout<<max1;
    }

    else{
    for(int i=0;i<m;i++)
    {
        int max=-1;
        for(int j=0;j<n;j++)
        {
            if(marks[j][i]-'0'>max){
                max=marks[j][i]-'0';
            }

        }
        for(int k=0;k<n;k++)
        {
            if(marks[k][i]-'0'==max)
                set1.insert(k);
        }
    }
     cout<<set1.size();
    }
}
