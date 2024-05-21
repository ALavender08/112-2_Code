#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans_index,ans_num; // n 標靶數， ans_index 打到第幾個，ans_num 打到什麼數字類型
    cin>>n>>ans_index>>ans_num;
    int time=0,tar[n];  //time 總打靶次數，tar 檢查到的靶位編號
    map <int,int> cou_tar; //算個數字出現幾次
    for (int i=0;i<n;i++)
    {
        cin>>tar[i];
        if (cou_tar.count(tar[i])) // >0 就是 true
            cou_tar[tar[i]]++;
        else
            cou_tar[tar[i]]=1;
    }

    //
    /*
    for (int i=0;i<n;i++)
        cout<<tar[i]<<": "<<cou_tar[tar[i]]<<endl;
    */

    for (int m=0;m<n;m++)
    {

        //
        /*
        cout<<time<<": ";
        for (int i=0;i<n;i++)
            cout<<tar[i]<<' ';
        cout<<endl;
        */

        if (tar[m]==-1) //射過就跳過
            continue;


        time++;


        // 確認是否射中同號
        if (tar[m]==ans_num)
            ans_index--;


        int shot=tar[m]; //射掉的號碼
        cou_tar[shot]--;   //射掉號碼出現次數-1
        tar[m]=-1; //被打掉

        if (cou_tar.count(shot))
        {
            for (int i=m+1;i<n;i++)
            {
                if (tar[i]==shot)
                {
                    cou_tar[shot]--;

                    // 確認是否射中同號
                    if (tar[i]==ans_num)
                        ans_index--;

                    tar[i]=-1;
                    break;
                }
            }
        }

        // 第 and_index 個被打倒了，跳出迴圈
        if (ans_index<=0)
            break;

    }

    cout<<time;

    return 0;

    /*
    解題思路:
    1. 依題意輸入標靶數、要打到第幾個的什麼數字
    2. 設一個陣列和一個 map 分別記錄 各個靶位、計算標靶編號出現幾次，並在輸入標靶時順便計算數量
    3. 設一變數計算要打幾次靶
    4. 進入for迴圈:
        。 如果發現這個靶被打過就掉下層(我設-1)
        。 如果沒被打過就依序 將總打靶數+1、判斷是否射中要打的編號(如果是，要打編號的所需次數-1)、
           將此次射掉的標靶值改成「被打過」、該靶位編號出現次數-1、確認老闆有沒有要打靶，有的話進入 for 迴圈:
           - 確認老闆要打哪個靶
           - 將該靶位編號出現次數-1
           - 確認老闆打的靶是否為題目要打的編號(如果是，要打編號的所需次數-1)
           - 將此次射掉的標靶值改成「被打過」
           - 跳出迴圈
        。 如果「要打編號的所需次數」<=0 (打完了) ，跳出迴圈
    5. 輸出所需次數
    */

    // 第四步驟用 while 迴圈也可以，去看這篇:
    // https://github.com/sarah21392773/zerojudge/blob/main/toi/k468.cpp

}
