#include<iostream>
#include<vector>
#include<set>

using namespace std;

int myxor(int x,int y)
{
    int res = 0; // Initialize result

    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);

        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);

        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

int  main()
{

    int a,target;
    cin>>a>>target;

    cout<<myxor(a,target);
}
