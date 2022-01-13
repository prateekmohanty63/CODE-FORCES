
#include<iostream>

using namespace std;


int main()
{
	int n;
	cin>>n;

	int arr1[n],arr2[n],arr3[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr3[i];
	}

	int start1=0;
    int start2=0;

    int res[2*n];

    int k=0;

    while(start1!=n && start2!=n)
    {
    	if(arr1[start1]<arr2[start2])
    	{
    		start1++;
    	}
    	else if(arr1[start1]>arr2[start2])
    	{
    		start2++;
    	}
    	else if(arr1[start1]==arr2[start2])
    	{
    		res[k++]=arr1[start1];
    		start1++;
    		start2++;
    	}
    }

    for(int i=0;i<k;i++)
    	cout<<res[i]<<" ";
    cout<<endl;

    int start3=0;
    int start4=0;
    int size=sizeof(res)/sizeof(res[0]);
    int res1[n];

    k=0;
    while(start3!=size && start4!=n)
    {
    	if(res[start3]<arr3[start4])
    	{
    		start3++;
    	}
    	else if(res[start3]>arr2[start4])
    	{
    		start4++;
    	}
    	else if(res[start3]==arr3[start4])
    	{
    		res1[k++]=res[start4];
    		start3++;
    		start4++;
    	}
    }

    for(int i=0;i<k;i++)
    	cout<<res1[i]<<" ";
}
