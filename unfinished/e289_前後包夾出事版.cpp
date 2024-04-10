#include <bits/stdc++.h>
using namespace std;

int main()
{
    int all_l, sub_l,beauty=0,now_place=0;
    // all_l = 陣列大小，sub_l = 子陣列大小，beauty = 美麗度(? ， now_place = 索引值

    cin>>sub_l>>all_l;
    string l[all_l],beau[sub_l]; // l = 整條彩帶 ， beau = 子彩帶(?

    for (int i=0;i<all_l;i++)
    {
        cin>>l[i]; // 依序輸入
    }

    for (int i=0;i<all_l;i++)
    {

        string new_color=l[i]; //新增
        bool re=false; //判斷子彩帶是否有重複的顏色


        int index;
        if ((now_place+1)/sub_l<1)
            index=now_place%sub_l;
        else
            index=sub_l;

        for (int j=0;j<index;j++)
        {
            if (j==now_place%sub_l)
                continue;  // 這格是新色彩要加的位置，不用檢查 ( 原本的色彩要被淘汰 )
            if (new_color==beau[j])
            {
                re=true; // 發現重複色彩
                break;
           }
        }
        if (re)
            now_place=0;

        if ((now_place+1)/sub_l>=1)
            beauty++;

        beau[now_place%sub_l]=new_color;
        now_place++;

        //
/*
        for (int x=0;x<sub_l;x++)
            cout<<beau[x]<<" ";
        cout<<"beauty= "<<beauty<<' ';
        cout<<"now_place= "<<now_place<<' ';
        cout<<"取整= "<<(now_place+1)/sub_l<<' ';
        cout<<"取餘= "<<now_place%sub_l<<endl;
        cout<<endl;
*/

      //自己測試發現出事 : 
      /*
        3 10
        1 2 3 3 3 4 5 6 5 7
      */

    }


    cout<<beauty;
    return 0;
}
