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
    /*
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c*r;j++)
        {
            cout<<l[i][j];
        }
        cout<<endl;

    }
    */
    
    

}
