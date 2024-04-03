#include <bits/stdc++.h>
using namespace std;

int s(int p)
{
    int tp=1;
    while (p>tp*tp)
    {
        tp++;
    }
    return tp;
}

int is_prime(int p,int s)
{
    bool is=false;
    for (int i=2;i<=s;i++)
    {
        if (p%i==0 && (float)p/i!=1.0)
        {
            break;
        }
        else if (i==s)
            is=true;
    }
    return is;
}

int main ()
{
    int n,x=2;
    cin>>n;

    int tn=s(n);
    while (x<=tn)
    {

        if (n%x!=0)
        {
            x++;
            continue;
        }

        int y=n/x;
        int sx=s(x),sy=s(y);
        bool xp=is_prime(x,sx),yp=is_prime(y,sy);

        if (xp && yp)
        {
            cout<<x<<" "<<y;
            return 0;
        }
        else
            x++;
    }


    cout<<"0 0";
    return 0;

    //我懶得寫解題思路了了，自行領會  ^ ^
}
