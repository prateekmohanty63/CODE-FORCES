#include<iostream>

using namespace std;


int main()
{

    int arr[1001][10001];


    int n;
    cin>>n;

    for(int i=0;i<2;i++)
    {

        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }

    int row_left_null=0;
    int row_left_one=0;
    int row_right_null=0;
    int row_right_one=0;
    int max_left=0,max_right=0;

    for(int i=0;i<n;i++)
    {

        if(arr[0][i]==0)
            row_left_null++;
        else if(arr[0][i]==1)
            row_left_one++;
    }

    for(int i=0;i<n;i++)
    {

         if(arr[1][i]==0)
            row_right_null++;
        else if(arr[1][i]==1)
            row_right_one++;
    }



      if(row_left_null>=row_left_one)
        max_left=row_left_null;

      else if(row_left_one>=row_left_one)
        max_left=row_left_one;

      if(row_right_null>=row_right_one)
        max_right=row_right_null;
      else if(row_right_one>=row_right_null)
        max_right=row_right_one;


       cout<<(n-max_left)+(n-max_right);
}
