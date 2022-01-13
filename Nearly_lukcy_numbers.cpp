#include<iostream>

using namespace std;

int digit(long long int n)
{
    long long int temp=n;

    int count=0;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    return count;
}


int main()
{

    long long int n;
    cin>>n;



    int num=digit(n);
    long long int temp=n;

    int count=0;

    for(int i=0;i<num;i++)
    {
        int r=temp%10;
        if(r==4 || r==7)
            count++;
            temp=temp/10;
    }


    if(count==4 || count==7 )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
