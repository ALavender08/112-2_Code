#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

bool comp(const point&lhs, const point&rhs)
{
    if (lhs.x == rhs.x)
        return lhs.y < rhs.y;
    else
        return lhs.x < rhs.x;

}
//回傳1(True) : 首個參數在前

int main()
{
    int n;
    cin>>n;
    point P[n];
    for (int i=0;i<n;i++)
    {
        cin>>P[i].x>>P[i].y;
    }

    sort(P, P+n, comp);

    for (int i=0;i<n;i++)
    {
        cout<<P[i].x<<" "<<P[i].y;
        if (i!=n-1)
            cout<<endl;
    }
    return 0;

    /*
    解題思路(我的理解，不保證對):
    1. 建一個struct
    2. comp回傳的是布林值，如果回傳1代表首個參數在前
    (我的理解: 如果 True ， 你怎麼寫他就怎麼排(維持原狀)
               如果 False ， 則反過來)
    3. 輸入座標點數並將設一組結構體(struct)的數量(?
    4. 依序輸入各結構體的x、y值
    5. 排序結構體
    (我的理解: sort(結構體組名稱, 結構體組名稱+總數 , 依據comp來排) 嗎?)
    6. 依序輸出
    */


}
