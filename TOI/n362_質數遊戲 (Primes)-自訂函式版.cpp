#include <bits/stdc++.h>
using namespace std;

int prime(int p)
{
    int tp=1;
    while (p>tp*tp)
    {
        tp++;
    }
    return tp;
}

int main ()
{
    int n,x=2;
    cin>>n;

    int tn=prime(n);
    while (x<=tn)
    {

        if (n%x!=0)
        {
            x++;
            continue;
        }

        int y=n/x , chx=2, chy=2;
        // ch? >> check ?

        bool xp=false, yp=false;
        //?p >> ? is prime


        int tx=prime(x);
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


        int ty=prime(y);
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
    1. 自訂一個函式 ( 以下稱 prime() ) :找出大於等於一數開根號的最小整數
    2. 進入主程式，依題意輸入要檢查的數 (以下稱 n )
    3. 進入 while 迴圈 ( 條件: 在試是否為題目的因數的數(以下稱x) <= prime(n) )
    4. 如果 x 不是 n 的因數就進入下個迴圈
    5. 設三個變數: y = n 的另一個因數 ( y*x=n ) 、試能否成為 x 因數的數(以下稱chx) 、 試能否成為 y 因數的數(以下稱chy)
    6. 設兩個布林變數: x 是否為質數 、 y 是否為質數
    7. 進入 while 迴圈檢查有無 x 的因數 ( 條件: chx <= prime(x) )，如果 x 可以整除 chx 且 x / chx 不等於 1 (避免出現自己除自己被判不是質數的情況)，表 x 非質數，
       如果 x = chx 還沒有找到 x 的因數就代表 x 為質數
    8. 再進入一個 while 迴圈檢查 y ，邏輯同 7.
    9. 如果 x 、 y 皆為質數，輸出 x 、 y ，否則 x +1 並開始下輪迴圈檢查
    10. 如果一直都沒符合條件，跳出迴圈後輸出 "0 0"
    */
}
