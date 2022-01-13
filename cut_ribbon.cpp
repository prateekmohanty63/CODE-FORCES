#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int maxim(int a,int b)
{
    if(a>b)
        return 1;
    return 0;
}

int minim(int a,int b,int c)
{
    if(a<b && c>=b)
        return 1;

    return 0;
}


int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    if(a==b && c==n && c==b)
    {
        cout<<1;
        exit(0);
    }


    int count=0;
    int min1=minim(a,b,c);
    int min2=minim(a,b,c);
    int min3=minim(a,b,c);

    int r=0;


     if(n%a==0 && n%b==0 && n%c==0)
    {
        if(maxim(a,b)==1 && maxim(a,c)==1)
            r=n/a;
        else if(maxim(b,a)==1 && maxim(b,c)==1)
            r=n/b;
        else if(maxim(c,a)==1 && maxim(c,b)==1)
            r=n/c;
    }

    else if(a+b+c == n)
        r=3;
    else if(a+b ==n || b+c==n  || c+a ==n)
        r=2;

       else if(min1==1)
        {
            int k=n%min1;
            if(k==b || k==c)
            r=(n/min1 + 1);
            else if(k==b+c)
                r=(n/min1 +2);
            else
                r=n/min1;
        }

        else if(min2==1)
        {
            int j=n%min1;
            if(j==a || j==c)
            r=(n/min1 + 1);
            else if(j==a+c)
                r=(n/min1 +2);
            else
                r=n/min2;
        }

         else if(min3==1)
        {
            int p=n%min1;
            if(p==a || p==b)
            r=(n/min1 + 1);
            else if(p==b+a)
                r=(n/min1 +2);
            else
                r=n/min3;
        }

    cout<<r;
}
