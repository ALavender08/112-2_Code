#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x=2;
    cin>>n;

    int t=1;
    while (n>t*t)
    {
        t++;
    }

    while (x<=t)
    {
        if (n%x!=0)
        {
            x++;
            continue;
        }

        int y=n/x , chx=2, chy=2, tx=1 , ty=1;
        // ch? >> check ?

        bool xp=false, yp=false;
        //?p >> ? is prime

        //x
        while (x>tx*tx)
        {
            tx++;
        }


        while (chx<=tx)
        {
            if (x%chx==0 && (float)x/chy!=1.0)
            {
                break;
            }
            else if (chx==tx)
                xp=true;
            chx++;
        }


        //y
        while (y>ty*ty)
        {
                ty++;
        }


        while (chy<=ty)
        {

            if (y%chy==0 && (float)y/chy!=1.0)
            {
                break;
            }
            else if (chy==ty)
                yp=true;
            chy++;
        }


        if (xp && yp)
        {
            cout<<x<<" "<<y;
            return 0;
        }
        else
            x++;
    }

    cout<<"0 0";
    return 0;

    /*
    注意: 這題不能一次 while 到底，就算TOI 算你對 Zerojudge 也會給你TLE (沒錯就是在說我
          檢查因數只要檢查到他的開根號就可以出來了，不然一定TLE

    解題思路:
    1. 輸入一數後，找出大於等於此數開根號的最小整數
    2. 進入 while 迴圈 (條件: 在試是否為題目的因數的數(以下稱x) <= 大於等於題目開根號後的最小整數)
    3. 如果 x 不是 n 的因數就進入下個迴圈
    4. 設五個變數: y = n 的另一個因數 ( y*x=n ) 、試能否成為 x 因數的數(以下稱chx) 、 試能否成為 y 因數的數(以下稱chy) 、 大於等於 x 開根號後的最小整數(以下稱tx) 、 大於等於 y 開根號後的最小整數(以下稱ty)
    5. 設兩個布林變數: x 是否為質數 、 y 是否為質數
    6. 找出小於 x 開根號的最大整數，並進入 while 迴圈 (條件: chx <= 大於等於 x 開根號的最小整數)，如果 x 可以整除 chx 且 x / chx 不等於 1 (避免出現自己除自己被判不是質數的情況)，表 x 非質數，
       如果 x = chx 還沒有找到 x 的因數就代表 x 為質數
    7. 再進入一個 while 迴圈檢查 y ，邏輯同 6.
    8. 如果 x 、 y 皆為質數，輸出 x 、 y ，否則 x +1 並開始下輪迴圈檢查
    9. 如果一直都沒符合條件，跳出迴圈後輸出 "0 0"
    */
}
