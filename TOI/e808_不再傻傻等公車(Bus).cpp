#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tot,h,m;
    cin>>tot>>h>>m;
    int every[tot],now_t=60*h+m;
    for (int i=0;i<tot;i++)
        cin>>every[i];
    int time[tot+1];
    for (int i=0;i<tot+1;i++)
    {
        if (i!=0)
            now_t+=every[i-1];
        time[i]=now_t;
    }

    int c;
    while (cin>>c)
    {
        if (c==0)
            return 0;
        int hr=time[c]/60,mi=time[c]%60;
        while(hr>=24)
            hr-=24;


        if (hr==0)
            cout<<"00";
        else if (hr<10)
            cout<<"0"<<hr;
        else
            cout<<hr;
        cout<<":";
        if (mi==0)
            cout<<"00";
        else if (mi<10)
            cout<<"0"<<mi;
        else
            cout<<mi;
        cout<<endl;
    }
    return 0;

    /*
    解題思路:
    1.依題意輸入站牌數、出發時間
    2.設一列表並輸入各站間隔於列表中
    3.再設一列表計算到達各站時間(全轉分鐘)
    4.用while迴圈輸入要查詢的車站(輸入0就結束迴圈)
    5.輸出到各站的 "小時:分鐘" (小時要<24)

    陷阱:
    超過24小時要用while迴圈一直減直到<24小時，
    不能只用一次條件判斷
    */
}
