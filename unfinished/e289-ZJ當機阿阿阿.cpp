#include <bits/stdc++.h>
using namespace std;

int main()
{
    int all_l, sub_l,beauty=0,now_place=0;
    cin>>sub_l>>all_l;
    int beau[sub_l]={-1};

    for (int i=0;i<all_l;i++)
    {

        int new_color;
        bool re=false;
        cin>>new_color;

        if (now_place!=0)
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

        if (re)
        {
            now_place=0;
        }

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
