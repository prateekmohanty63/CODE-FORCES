#include<iostream>

using namespace std;

int set1(int r[],int n)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(r[i]<0)
            count++;
    }

    if(count%2==1)
        return 1;
    return -1;
}

int set2(int r[])



int main()
{
    int n;
    cin>>n;

}
