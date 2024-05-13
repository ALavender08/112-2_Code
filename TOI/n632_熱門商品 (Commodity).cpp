#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    前言:
    本題我用map算各商品在問卷中出現幾次，所以要先知道map怎麼用
    */

    int q,own;
    cin>>q>>own; //q 是問卷，own 是店鋪數
    int love[q],pro[own];   //love是問卷中喜歡的商品，pro 是每間店的商品數量
    map <int,int> mostpop; //記錄最受歡迎商品

    //依題意輸入
    for (int i=0;i<q;i++)
    {
        cin>>love[i];
        if (mostpop.count(love[i]))
            mostpop[love[i]]++;
        else
            mostpop[love[i]]=1;
    }

    for (int i=0;i<own;i++)
        cin>>pro[i];


    //看哪個商品最受歡迎
    int mopop=-1,mo_i; //mopop是最受歡迎商品在問卷中出現次數，mo_i是商品編碼
    for (int j=0;j<q;j++)
    {
        int num=mostpop[love[j]]; //商品出現次數
        if(num>mopop)
        {
            mopop=num;
            mo_i=love[j];
        }
    }

    //看哪家店最不受歡迎
    int unpop=1000,un_i;  //unpop是最不受歡迎商店出現商品次數，un_i是最不受歡迎商店編號
    for (int j=0;j<own;j++)
    {
        int p,havepro=0;
        for (int m=0;m<pro[j];m++)
        {
            cin>>p;
            if (mostpop.count(p))
            {
                havepro+=mostpop[p];
            }

        }
        if (havepro<unpop)
        {
            unpop=havepro;
            un_i=j;
        }
    }

    //輸出
    cout<<mo_i<<' '<<un_i+1;

    return 0;

    /*
    解題思路:
    1. 輸入問卷份數、店鋪數，並開兩個陣列分別記錄問卷填的商品編號、各店的擺放商品數，
       再開一個map(類字典)，key記錄受歡迎的商品編號，value記錄商品出現次數
    2. 依序輸入客戶喜歡的商品編號同時計算此商品的出現次數並記錄
    3. 依序輸入各店擺放商品數量
    4. 設兩變數分別記錄最受歡迎商品在問卷中出現次數及最受歡迎商品的編碼，再從map抓哪個商品出現最多次並記錄
    5. 設兩變數分別記錄最不受歡迎商店出現商品次數及最不受歡迎商店編號
    6. 進迴圈，先設一變數記錄商品出現在商店中的次數，再依序輸入商店內的商品，同時從map抓此商品在問卷中出現幾次並加總
    7. 輸出商品編號及商店編號(記得+1，列表索引值從0開始)
    */
}
