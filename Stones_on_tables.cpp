#include<iostream>
#include<set>
using namespace std;


int same(int n,string c)
{

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(c[i]==c[i+1])
            count++;
    }

    return count;


}
int main()
{
    int n;
    cin>>n;

    string color;
    cin>>color;

    int k=same(n,color);
    cout<<k;

}
