#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,s;
    cin>>r>>c>>s;
    char l[r][c*r],step[s];

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c*r;j++)
        {
            l[i][j]='-';
        }

    }

    for (int i=0;i<r;i++)
    {
        for (int j=r-i-1;j<c*r;j+=r)
        {
            cin>>l[i][j];
        }

    }

    for (int i=0;i<s;i++)
        cin>>step[i];

    //

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c*r;j++)
        {
            cout<<l[i][j];
        }
        cout<<endl;

    }

    // 0 右上；1 右；2 右下；3 左下；4 左；5 左上

    map <int,bool> bee;
    int x=r,y=0,type=0;
    string route[s];
    for (int i=0;i<s;i++)
    {
        int now_step = step[i];
        if (now_step<=2)
        {
            if ((x+y+1)%r==c)
            {
                route[i]=l[x][y];
                continue;
            }
            if (now_step==0)
            {
                if (x==0)
                {
                    route[i]=l[x][y];
                    continue;
                }
                x--;
                y+=(r-1);
                route[i] = l[x][y];
                if (!bee.count(l[x][y]))
                {
                    bee[l[x][y]]=true;
                    type++;
                }
            }
            if (now_step==1)
            {
                y+=(r-1);
                route[i] = l[x][y];
                if (!bee.count(l[x][y]))
                {
                    bee[l[x][y]]=true;
                    type++;
                }
            }
        }
        
    }
    


}
