#include <bits/stdc++.h>
using namespace std;

/*
int stair(int level,int k)
{
    int limit=k;
    if (level==1)
        return 1;
    else if (level==2 && limit>=1)
        return 2;
    else if (limit+2>=3)
    {
        limit--;
        return stair(level-1,limit)+stair(level-2,limit);
    }
    else
        return stair(level-1,limit)+1;
}
*/
int stair(int level,int k)
{
    int lev=1,sum=0;
    while(lev<=level && limit<=k)
    {
        if (lev==1)
            sum+=1;
        else if (k>0)
            sum+=
    }
}

int main()
{
    int l,k;
    cin>>l>>k;
    cout<<stair(l,k);
    return 0;
}

