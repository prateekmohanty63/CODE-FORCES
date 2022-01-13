#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int no_ele;
    cin>>no_ele;

    int arr[no_ele];

    for(int i=0;i<no_ele;i++)
        cin>>arr[i];

    int no_search;
    cin>>no_search;

    int vasya=0,petya=0;


   int search_ele[100];

   for(int i=0;i<no_search;i++)
    cin>>search_ele[i];


    for(int i=0;i<no_search;i++)
    {
        for(int j=0;j<no_ele;j++)
        {
            if(search_ele[i]==arr[j])
              {
                  vasya++;
                  break;
              }
              vasya++;
        }
    }

    for(int i=0;i<no_search;i++)
    {
        for(int j=0;j<no_ele;j++)
        {
            if(search_ele[i]==arr[no_ele-j-1])
            {
                petya++;
                break;
            }

            petya++;
        }
    }

    cout<<vasya<<" "<<petya;
}

