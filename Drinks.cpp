#include<iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int  arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    double avg=0;

    for(int i=0;i<n;i++)
        avg+=arr[i];

    cout<<avg/n<<setprecision(12);
}
