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
    return 0;

    /*
    解題思路:
    1.按題意輸入各種變數(每天車位的條件我用列表存)
    2.進迴圈，設一列表儲存符合條件的車位，設一變數紀錄有多少車位符合條件
    3.依序判斷哪些車位符合條件
    4.按題意輸出各種東西

    os:嗚嗚嗚我卡在小細節，找了好久都沒看到錯哪，不知道寫程式的時候在幹嘛...
    */
}
