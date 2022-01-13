#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<math.h>

using namespace std;


int main()
{
    int area1,area2,area3;
    cin>>area1>>area2>>area3;


    int l,b,h;

  //  l*b=area1;
   // b*h=area2;
   // l*h=area3;

    //b/h=area1/area3;
    // (area1*h)*h/area3=area2;

    h=sqrt((area2*area3)/area1);
    l=area3/h;
    b=area2/h;

    cout<<4*(h+l+b);

}

