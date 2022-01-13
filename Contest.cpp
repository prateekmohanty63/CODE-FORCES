#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    /// max(3p,p-(p/250)*t);

   int misha_points=max(3*a/10,a-a*c/250);
    int vasya_points=max(3*b/10,b-b*d/250);

    if(misha_points>vasya_points)
        cout<<"Misha";
    else if(misha_points<vasya_points)
        cout<<"Vasya";
    else
        cout<<"Tie";
}
