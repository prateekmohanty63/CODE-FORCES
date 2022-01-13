#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;

	vector<int>vec1;

	for(int i=0;i<n;i++)
		{
			int r;
			cin>>r;
			vec1.push_back(r);
		}
       sort(vec1.begin(),vec1.end());
       int min=10000;

      for(int i=0;i<n-m+1;i++)
      {
          int diff=vec1[n-m+1]-vec1[i];

          if(diff<min)
            min=diff;

      }
      cout<<min;
}
