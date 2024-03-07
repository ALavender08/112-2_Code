#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tot,sand;
    cin>>tot>>sand;
    int level=sand/1000,num,growcp=0;
    for (int i=0;i<tot;i++)
    {
        int cp,iv;
        cin>>cp>>iv;
        if (0<=iv && iv<=29)
            cp+=10*level;
        else if (30<=iv && iv<=39)
            cp+=50*level;
        else if (40<=iv && iv<=45)
            cp+=100*level;
        if (cp>=growcp)
        {
            growcp=cp;
            num=i+1;
        }
    }
    cout<<num<<' '<<growcp;
    return 0;

}
