#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int n,target;
	cin>>n>>target;

    vector<int>vec1;

    for(int i=0;i<n;i++)
    {
    	int r;
    	cin>>r;
    	vec1.push_back(r);
    }



    sort(vec1.begin(),vec1.end());

    /*for(int i=0;i<vec1.size();i++)
    	cout<<vec1[i]<<" ";*/

    for(int i=0;i<vec1.size()-2;i++)
    {
       // int sum=vec1[i];
        int start=i+1;
        int endi=vec1.size()-1;

        while(start<endi)
        {

                if(vec1[i]+vec1[start]+vec1[endi]==target)
                {
                    cout<<vec1[i]<<" "<<vec1[start]<<" "<<vec1[endi];
                    return 0;
                }
                else if(vec1[i]+vec1[start]+vec1[endi]>target)
                {
                    endi--;
                }
                else
                    start++;

        }
    }


}
