#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,R;
    cin>>T>>R;
    int x=T/(1+R);

    int win=T-((1+R)*x);
    if (win>=1 && win <=R)
        cout<<1;
    else
        cout<<0;
    return 0;

    /*
    注意 if 中的條件
    */

}
