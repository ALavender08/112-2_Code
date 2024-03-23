#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x=2;
    cin>>n;

    int t=1;
    while (n>t*t)
    {
        t++;
    }

    while (x<=t)
    {
        if (n%x!=0)
        {
            x++;
            continue;
        }

        int y=n/x , chx=2, chy=2, tx=1 , ty=1; 
        // ch? >> check ?

        bool xp=false, yp=false;
        //?p >> ? is prime

        //x
        while (x>tx*tx)
        {
            tx++;
        }
        
        while (chx<=tx)
        {
            if (x%chx==0 && x!=2)
            {
                break;
            }
            else if (chx==tx)
                xp=true;
            chx++;
        }


        //y
        while (y>ty*ty)
        {
                ty++;
        }


        while (chy<=ty)
        {

            if (y%chy==0 && y!=2)
            {
                break;
            }
            else if (chy==ty)
                yp=true;
            chy++;
        }


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

    /*
    注意: 這題不能一次 while 到底，就算TOI 算你對 Zerojudge 也會給你TLE (沒錯就是在說我
          檢查因數只要檢查到他的開根號就可以出來了，不然一定TLE
    */
}
