#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int time;
    cin>>time;
    for (int i=0;i<time;i++)
    {
    int n,x=2;
    cin>>n;
    bool is_prime=true;

    while (x<=sqrt(n))
    {

        if (n%x!=0)
        {
                x++;
                continue;
        }
        else
        {
            is_prime=false;
            break;
        }
    }
        if (is_prime)
            cout<<"Y";
        else
            cout<<"N";

        if (i!=time-1)
            cout<<endl;
    }
        return 0;

  //就這樣 ~(￣▽￣)~* 會寫TOI就會這題
}
