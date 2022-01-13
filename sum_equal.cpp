#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	int n;
	cin>>n;

	vector<int>vec1,vec2;

	for(int i=0;i<n;i++)
	{
		int r;
		cin>>r;
		vec1.push_back(r);
	}
	int target;
	cin>>target;

	vec2=vec1;
	sort(vec2.begin(),vec2.end());

	int start=0;
	int end=vec2.size()-1;

	/*for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";


	for(int i=0;i<vec2.size();i++)
		cout<<vec1[i]<<" ";*/


	while(start<end)
	{
		int sum=vec2[start]+vec2[end];

		if(sum>target)
		{
			end--;
		}
		else if(sum<target)
		{
			start++;
		}
		else if(sum==target)
		{
		    int k=start;
			cout<<vec2[start]<<","<<vec2[end]<<endl;
			end--;
		}
	}
}
