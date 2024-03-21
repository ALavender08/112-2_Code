#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score,m1=0,c1=0,m2=0,c2=0;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
            {
                cin>>score;
                if (i==0)
                    m1+=score;
                else if (i==1)
                    c1+=score;
                else if (i==2)
                    m2+=score;
                else if (i==3)
                    c2+=score;
            }
    }

    cout<<m1<<":"<<c1<<endl;
    cout<<m2<<":"<<c2<<endl;

    bool m1win=false,m2win=false;

    if (m1>c1)
        m1win=true;
    if (m2>c2)
        m2win=true;
    if (m1win && m2win)
        cout<<"Win";
    else if (m1win || m2win)
        cout<<"Tie";
    else
        cout<<"Lose";
    return 0;

    /*
    解題思路:
    1.按提議輸入各場分數並提前加總客、主場分數
    2.輸出各場分數
    3.用布林變數判斷主場贏、平手、或主場輸並輸出結果
    */

}
