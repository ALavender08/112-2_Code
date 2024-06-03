#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int att[n],def[n],ability[n];
    for (int i=0;i<n;i++)
    {
        cin>>att[i]>>def[i];
        ability[i]=att[i]*att[i]+def[i]*def[i];
    }

    int biggest=0,second_big=-1,bigg_i=-1,secbigg_i=-2;
    for (int i=0;i<n;i++)
    {
        if (ability[i]>biggest)
        {
            second_big=biggest;
            secbigg_i=bigg_i;
            biggest=ability[i];
            bigg_i=i;
        }
        else if (ability[i]<biggest && ability[i]>second_big)
        {
            second_big=ability[i];
            secbigg_i=i;
        }

    }

    cout<<att[secbigg_i]<<' '<<def[secbigg_i];
    return 0;


}
