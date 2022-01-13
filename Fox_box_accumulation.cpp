#include<iostream>
#include<stack>

using namespace std;


int main()
{
    int n;
    cin>>n;

    stack<int>stk1;

    int arr[n];

    // stk1.push(-1);
    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        stk1.push(r);

    }

    int k=1;
    arr[0]=stk1.top();
    stk1.pop();
    int count=1;
    int count1=0;

    for(int i=1;i<n;i++)
    {
        if(arr[k-1]>stk1.top())
        {
            arr[k++]=stk1.top();
            stk1.pop();
        }
        else if(arr[k-1]<stk1.top() && stk1.top()!=0)
        {
            count++;
            arr[k++]=stk1.top();
            stk1.pop();
        }
        else if(arr[k-1]==stk1.top() && arr[k-1]!=0)
            continue;

        else if(arr[k-1]==stk1.top() && arr[k-1]==0)
        {
            while(stk1.top()!=0){
                count1++;
                stk1.pop();
            }
        }
    }

    cout<<count1<<endl;

   cout<<count+count1;
}
