#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int abc[n][3];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<3;j++)
            cin>>abc[i][j];
    }

    for (int i =0;i<n;i++)
    {
        int a=abc[i][0],b=abc[i][1],c=abc[i][2];
        //cin>>a>>b>>c;

        int l[b-a-1],index=0;
        for (int x=0;x<b-a-1;x++)
            l[x]=0;
        for (int y=a+1;y<b;y++)
        {
            if (y%c!=0)
                {
                    l[index]=y;
                    index++;
                }
        }
        if (index==0)
            cout<<"No free parking spaces.";
        else
        {
            for (int z=0;z<index;z++)
            {
                cout<<l[z];
                if (z!=index-1)
                    cout<<' ';
            }


        }
        if (i!=n)
                cout<<endl;
    }
}
