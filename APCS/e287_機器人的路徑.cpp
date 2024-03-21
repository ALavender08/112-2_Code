#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int l[r+2][c+2], small=1000000 , small_i, small_j;
    for (int i=0;i<r+2;i++)
    {
        for (int j=0;j<c+2;j++)
            l[i][j]=-1;
    }

    for (int i=1;i<=r;i++)
    {
        for (int j=1;j<=c;j++)
        {
            cin>>l[i][j];
            if (l[i][j]<small)
            {
                small=l[i][j];
                small_i=i;
                small_j=j;
            }
        }
    }

    int step=small;

    while (true)
    {

        //
        //cout<<small_i<<" "<<small_j<<endl;

        l[small_i][small_j]=-1;

        int next=1000000,next_i,next_j;
        for (int i=small_i-1;i<=small_i+1;i++)
        {
            if (i==small_i)
                continue;
            else if (l[i][small_j]==-1)
                continue;
            if (l[i][small_j]<next)
            {
                next=l[i][small_j];
                next_i=i;
                next_j=small_j;
            }
        }

        for (int j=small_j-1;j<=small_j+1;j++)
        {
            if (j==small_j)
                continue;
            else if (l[small_i][j]==-1)
                continue;
            if (l[small_i][j]<next)
            {
                next=l[small_i][j];
                next_i=small_i;
                next_j=j;

            }
        }
        if (next==1000000)
            break;
        step+=next;
        small_i=next_i;
        small_j=next_j;


    }
    cout<<step;
    return 0;

    /*
    解題思路:
    1. 依題意輸入欄與列
    2. 設立二維陣列(圍牆策略)並設分別變數記錄最小值、最小值的列索引值、最小值的欄索引值
    3. 初始化二維陣列並依題意輸入各項，同時找出最小值及其所在的索引值
    4. 設一變數記錄走的數字，可以先加起始位置(整個列表最小值)
    5. 進入 while 迴圈，先將起始點改為-1，避免重複走到，
       再進入兩個 for 迴圈，分別判斷上下左右的數哪個最小，同時記錄其索引值，
       跳出 for 迴圈後判斷是否還有下一步可以走，不行就跳出 while 迴圈，
       可以的話將走過的路加上下一步的數字，並將起始點的索引值改為下一步的索引值，繼續下一次的判斷
    6. 跳出 while 迴圈後輸出走過的路的分數
    */


}
