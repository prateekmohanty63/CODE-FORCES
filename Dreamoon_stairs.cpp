#include<iostream>
#include<set>
#include<vector>

using namespace std;

int valid(int n,int m)
{
    if(n<m)
        return -1;
    int count=0;
    int temp=n;

    if(n%2==0)
    {
        while(temp!=2)
        {
            temp=temp-2;
            count++;
        }

    }
}

int main()
{
    int n,m;
    cin>>n>>m;


}
