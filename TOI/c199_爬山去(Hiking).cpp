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
    
    /*
    解題思路:
    1.第一個輸入的數字為接下來會記錄的高度數量
    2.輸入高度時記得刪掉重複的(第0、1項及第n-1、n項不能刪)
    3.用迴圈判斷是否為最高點(記得要跳過被刪的高度)
    */
}
