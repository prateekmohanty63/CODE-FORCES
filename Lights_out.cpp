#include<iostream>

using namespace std;


int main()
{

    int arr[3][3],arr1[3][3];
    int a;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a;
            arr[i][j]=a;
            arr1[i][j]=1;
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(arr[i][j]>0 && arr[i][j]%2==0)
            {
                arr1[i][j]=1;
                if(arr[i][j+1]==0)
                    arr[i][j+1]=1;
                else
                    arr[i][j+1]=0;
            }
            else if(arr[i][j]>0 && arr[i][j]%2==1)
            {
                arr1[i][j]=0;
                if(arr[i][j+1]==0)
                    arr[i][j+1]=1;
                else
                    arr[i][j+1]=0;

            }
        }
    }

    for(int i=0;i<3;i++)
    {
        if(arr[2][i]>0 && arr[2][i]%2==0)
            arr[2][i]=1;
        else if(arr[2][i]>0 && arr[2][i]%2==1)
            arr[2][i]=0;
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
}
