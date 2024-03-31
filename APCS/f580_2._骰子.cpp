#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,pro;
    cin>>num>>pro;
    int dice[num][3];
    for (int i=0;i<num;i++)
    {
        dice[i][0]=1;
        dice[i][1]=4;
        dice[i][2]=2;

        //0>>上 1>>前 2>>右
    }

    for (int i=1;i<=pro;i++)
    {
        int which,change;
        cin>>which>>change;

        if (change==-1)
        {
            swap(dice[which-1][0],dice[which-1][1]);
            dice[which-1][0]=7-dice[which-1][0];
        }
        else if (change==-2)
        {
            swap(dice[which-1][0],dice[which-1][2]);
            dice[which-1][0]=7-dice[which-1][0];
        }
        else
        {
            for (int j=0;j<3;j++)
                {
                    swap(dice[which-1][j],dice[change-1][j]);
                }
        }
    }

    for (int i=0;i<num;i++)
    {
        cout<<dice[i][0];
        if (i!=num-1)
            cout<<' ';
    }
    return 0;

    /*
    先備冷知識:
    骰子的一面與其對面加起來=7

    注意:
    改動骰子的索引值=題目輸入的值-1 (索引值第一項為0)

    解題:
    1. 先依題意輸入骰子數、步驟數
    2. 設一列表紀錄每顆骰子上視圖、前視圖、右視圖並初始化成 1、4、2
       (看到某位大大用struct解題，我覺得那樣應該比較好，數字大了可能比較不會TLE)
       (連結: https://hackmd.io/9b3hM-qlR_mN92TsP9aYRA?view)
    3. 進入「步驟數」次迴圈，並輸入哪個骰子要動、要改變什麼
    4. 如果改動編號為 「-1」，骰子像前轉(後視圖 = 7 - 前視圖 變上視圖，上視圖變前視圖)；
       如果改動編號為 「-2」，骰子像右轉(左視圖 = 7 - 右視圖 變上視圖，上視圖變前視圖)；
       如果以上皆非，兩個骰子互換
    5. 依序輸出所有骰子的上視圖

    心得:
    其實紀錄上、前、右視圖三個值就好，不用把整顆骰子記錄下來
    所以......我一開始在幹嘛 (⊙ˍ⊙)

    */


}
