#include<iostream>
#include<set>

using namespace std;

/*int digit(int y)
{
    int temp=y;
    int count=0;

    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    return count;
}*/

bool same(int x,int num=4)
{
    int flag=0;
    int temp1=0;
    set<int> r;


    for(int i=0;i<4;i++)
    {
        int k=temp1%10;
        r.insert(k);
        temp1=temp1/10;
    }
    int a=r.size();
    if(a!=num)
        return false;
    else
        return true;
}


int main()
{

    int year;
    cin>>year;


   int flag1=0;
   int i=1;

   while(flag1!=1)
   {
       if(same(year+i,4))
       {
           i++;
           flag1=1;
       }
       else
       {
           i++;
       }

   }
   cout<<year+i;
}
