#include <bits/stdc++.h>
using namespace std;


int main()
{
    int dice_num,process;
    cin>>dice_num>>process;

    int dice[3][4][dice_num];
    for (int d=0;d<dice_num;d++)
    {
        for (int i=0;i<3;i++)
        {
            if (i==0)
            {
                for (int j=0;j<4;j++)
                    dice[i][j][d]=3;
            }
            else if (i==1)
            {
                dice[i][0][d]=5;
                dice[i][1][d]=1;
                dice[i][2][d]=2;
                dice[i][3][d]=6;
            }
            else
            {
                for (int j=0;j<4;j++)
                    dice[i][j][d]=4;
            }
        }
    }

    int which_dice,change;
    for (int i=0;i<=process;i++)
    {
        cin>>which_dice>>change;
        if (change==-1)
        {
            0
        }
        else if (change==-2)
        {
            0
        }
        else
        {
            0
        }

    }



}
