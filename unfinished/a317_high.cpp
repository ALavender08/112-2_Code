#include <bits/stdc++.h>
using namespace std;

int stair(int level)
{
    // 可以不用else
    if (level==1)
        return 1;
    else if (level==2)
        return stair(1)+1;
    else if (level==3)
        return stair(1)+stair(2)+1;
    else
        return stair(level-1)+stair(level-2)+stair(level-3);
}
int main()
{
    int l;
    cin>>l;
    cout<<stair(l);
    return 0;
}
