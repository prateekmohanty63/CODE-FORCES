#include<iostream>
#include<vector>
#include<algorithm>

using namespace  std;


int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>> n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink=k*l;
    int total_toast=total_drink/n;
    int total_limes=c*d;
    int total_salt=p/np;

    vector<int> vec1;
     vec1.push_back(total_toast);
     vec1.push_back(total_limes);
     vec1.push_back(total_salt);

     sort(vec1.begin(),vec1.end());

     cout<<vec1[0]/n;
}
