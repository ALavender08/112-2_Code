#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l[n],tot=0;

    for (int i=0;i<n;i++)
    {
        l[i]=-1;
    }

    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if (l[i-1]==a && i>1 && i<n-1)
            l[i-1]=-1;
        l[i]=a;

    }

    //
    /*for (int i=0;i<n;i++)
    {
        cout<<l[i]<<' ';
    }
    cout<<endl;*/

    for (int i=1;i<n-1;i++)
    {
        if (l[i]==-1)
            continue;

        int left=l[i-1],right=l[i+1],tl=i,tr=i;

        while (left==-1 && tl!=0)
        {
            tl--;
            left=l[tl];
        }
        while(right==-1 && tr!=n-1)
        {
            tr++;
            right=l[tr];
        }
        if (l[i]>left && l[i]>right)
            tot++;
    }
    cout<<tot;
}
