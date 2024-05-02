#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,m;
    cin>>r>>c>>m;
    int l[r][c],step;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
            cin>>l[i][j];
    }

    int start_r=0,ronate=0;

    for (int i=0;i<m;i++)
    {
        cin>>step;
        if (step)
        {
            for (int x=0;x<r/2;x++)
            {
                for (int y=0;y<c;y++)
                    swap(l[x][y],l[r-1-x][y]);
            }
        }
        else
        {
            ronate++;
        }
    }




    return 0;
}
