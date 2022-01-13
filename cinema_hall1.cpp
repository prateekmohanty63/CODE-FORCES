#include<iostream>

using namespace std;

bool cinema(int a[],int n)
{

    if(a[0]!=25)
        return false;
    int no_25=1,no_50=0,no_100=0;
    int flag=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]==25)
            no_25++;
        else if(a[i]==50){

            if(no_25<=0)
            {
                flag=1;
                break;
            }
            else if(no_25>0)
            {
                no_50++;
                no_25--;
            }
        }
        else{


                if(no_25>=3 && no_50==0)
                {
                    no_100++;
                    no_25=-3;
                }
                else if(no_50>=1 && no_25>=1)
                {
                    no_100++;
                    no_25--;
                    no_50--;
                }
                else
                {
                    flag=1;
                    break;
                }
        }
    }

    if(flag==0)
    return true;
    return false;

}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(cinema(arr,n))
        cout<<"YES";
    else
        cout<<"NO";
}
