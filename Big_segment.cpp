#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;

    long int x_cord[n],y_cord[n];

    for(int i=0;i<n;i++)
    {
        cin>>x_cord[i]>>y_cord[i];
    }

    long long int max_num=9999999999;
    int min_num=-32976;
    int res_index=-1;

    for(int i=0;i<n;i++)
    {
        if(x_cord[i]<max_num)
        {
            max_num=x_cord[i];
        }

        if(y_cord[i]>min_num)
        {
            min_num=y_cord[i];
        }
    }


    for(int i=0;i<n;i++)
    {
        if(x_cord[i]==max_num && y_cord[i]==min_num)
        {
            res_index=i;
        }

    }



    if(res_index==-1)
        cout<<-1;
   else
    cout<<res_index+1;
}
