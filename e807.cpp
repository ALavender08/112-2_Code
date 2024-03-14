#include <bits/stdc++.h>
using namespace std;
int main()
{
    float rain[7][4],day,d_big=0,time,t_big=0;
    for (int i=0;i<7;i++)
    {
        for (int j=0;j<4;j++)
            cin>>rain[i][j];
    }

    for (int i=0;i<7;i++)
    {
        float d=0;
        for (int j=0;j<4;j++)
            d+=rain[i][j];
        if (d>d_big)
            {
                day=i+1;
                d_big=d;
            }
    }

    for (int i=0;i<4;i++)
    {
        float t=0;
        for (int j=0;j<7;j++)
            t+=rain[j][i];
        if (t>t_big)
            {
                time=i;
                t_big=t;
            }
    }


    cout<<day<<endl;

    if (time==0)
        cout<<"morning";
    else if (time==1)
        cout<<"afternoon";
    else if (time==2)
        cout<<"night";
    else
        cout<<"early morning";
    return 0;

    /*
    解題思路:
    1.依題意輸入各天各時段的雨量
    2.加總各天雨量並找出最大值
    3.加總各時段雨量並找出最大值
    4.輸出最大值的天、時段
    */

}
