#include<iostream>

using namespace std;


int main()
{
	int limak_wei=0,bob_wei=0;
	cin>>limak_wei>>bob_wei;

	int count=0;

	while(limak_wei<=bob_wei)
	{
          limak_wei*=3;
          bob_wei*=2;
          count++;
	}
	cout<<count;
}