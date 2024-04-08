#include <bits/stdc++.h>
using namespace std;

int main()
{
    int all_l, sub_l,beauty=0,time=0,now_place=-1;
    cin>>sub_l>>all_l;
    int l[sub_l],beau[sub_l]={0};

    for (int i=0;i<all_l;i++)
    {
        time++;
        now_place++;
        int new_color;
        bool re=false;
        cin>>new_color;

        if (time!=1)
        {
            for (int j=0;j<sub_l;j++)
            {

                if (beau[j]==0)
                    break;
                if (new_color==beau[j])
                {
                    re=true;
                    break;
                }
            }
        }
        if (re)
            continue;

        if (time/sub_l>=1)
            beauty++;

        if (now_place==sub_l)
            now_place=0;


        l[now_place]=new_color;
        beau[now_place]=new_color;



        //
/*
        for (int x=0;x<sub_l;x++)
            cout<<beau[x]<<" ";
        cout<<"beauty= "<<beauty<<' ';
        cout<<"now_place= "<<now_place<<endl;
        cout<<endl;
*/



    }


    cout<<beauty;
    return 0;
}
