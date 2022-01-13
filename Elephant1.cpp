#include<iostream>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int count=0;

	if(n==1 || n==2 || n==3 || n==4 || n==5)
		cout<<1;
	else{
		while(n!=0)
		{
			if(n>=5)
				n-=5;
			else if(n>=4 && n<5)
				n-=4;
			else if(n>=3 && n<4)
				n-=3;
			else if(n>=2 && n<3)
				n-=2;
			else if(n==1 && n<2)
				n--;
			count++;
		}
		cout<<count;
	}
}
