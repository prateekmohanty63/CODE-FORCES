#include<iostream>
#include<vector>

using namespace std;


int main()
{

    int no_stud,time;
    cin>>no_stud>>time;

    vector<char> arr;
    vector<char> arr1;
    char a;

    for(int i=0;i<no_stud;i++)
    {

     cin>>a;
        arr.push_back(a);
    }

   arr1=arr;


    int k=0;
    int b=0;
    for(int i=0;i<time;i++)
    {
        for(int j=0;j<no_stud-1;j++)
        {

        if(arr[j]=='B' && arr[j+1]=='G')
        {
            arr1[j]='G';
            arr1[j+1]='B';


        }

        }
        arr=arr1;
    }

    for(int i=0;i<no_stud;i++)
        cout<<arr1[i];
}
