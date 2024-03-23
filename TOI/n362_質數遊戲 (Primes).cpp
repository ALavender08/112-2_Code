#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x=2;
    cin>>n;

    while (x<=sqrt(n))
    {

        if (n%x!=0)
            {
                x++;
                continue;
            }

        int y=n/x , chx=2, chy=2; // ch? >> check ?

        bool xp=true, yp=true;
        //?p >> ? is prime

        while (chx<=sqrt(x))
        {
            if (x%chx==0)
            {
                xp=false;
                //cout<<"x= "<<x<<"y= "<<y<<endl;
                break;
            }
            chx++;
        }

        while (chy<=sqrt(y))
        {

            if (y%chy==0)
            {
                yp=false;
                //cout<<"x= "<<x<<"y= "<<y<<endl;
                break;
            }
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
               檢查因數只要檢查到他的開根號就可以出來了，不然一定TLE(我用內建函式

        解題思路:
        1. 輸入一數後進入 while 迴圈 (條件: 在試是否為題目的因數的數(以下稱x) <= 題目(以下稱n)開根號)
        2. 如果 x 不是 n 的因數就進入下個迴圈
        3. 設三個變數: y = n 的另一個因數 ( y*x=n ) 、試能否成為 x 因數的數(以下稱chx) 、 試能否成為 y 因數的數(以下稱chy)
        4. 設兩個變數: x 是否為質數 、 y 是否為質數
        5. 進入 while 迴圈 (條件: chx <= x 的開根號)，如果 x 可以整除 chx ，表 x 非質數
        6. 再進入一個 while 迴圈檢查 y ，邏輯同5.
        7. 如果 x 、 y 皆為質數，輸出 x 、 y ，否則 x +1 並開始下輪迴圈檢查
        8. 如果一直都沒符合條件，跳出迴圈後輸出 "0 0"

        吐槽:
        TOI 對了但 Zerojudge 錯了 -.- TOI好像不會有TLE的問題
    */
}
