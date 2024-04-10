#include <bits/stdc++.h>
using namespace std;

int main()
{
    int all_l, sub_l,beauty=0,now_place=0;
    // all_l = 陣列大小，sub_l = 子陣列大小，beauty = 美麗度(? ， now_place = 索引值

    cin>>sub_l>>all_l;
    int l[all_l],beau[sub_l]={-1}; // l = 整條彩帶 ， beau = 子彩帶(?

    for (int i=0;i<all_l;i++)
    {
        cin>>l[i]; // 依序輸入
    }

    for (int i=0;i<all_l;i++)
    {

        int new_color=l[i];
        bool re=false;


        if (now_place!=0)
        {
            if ((now_place+1)/sub_l<1)
            {
            for (int j=0;j<now_place%sub_l;j++)
            {
                if (beau[j]==-1)
                    break;
                if (new_color==beau[j])
                {
                    re=true;
                    break;
                }
            }
            }
            else
            {
            for (int j=0;j<sub_l;j++)
            {
                if (beau[j]==-1)
                    break;
                if (new_color==beau[j])
                {
                    re=true;
                    break;
                }
            }
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
        cout<<"now_place%sub_l= "<<now_place%sub_l<<endl;
        cout<<endl;
*/



    }


    cout<<beauty;
    return 0;
}
