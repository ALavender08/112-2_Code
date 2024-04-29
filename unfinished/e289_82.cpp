#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set 與插入順序無關，小的數自動放前面，大的數自動放後面，因此不可直接作為整條彩帶的紀錄
    //參考資料: https://hackmd.io/@sa072686/cp/%2F%40sa072686%2FH1qI86oOr

    // vector 本身無 find 或 count，不是不能用，只是會TLE
    // vector 用 count 函示:
    // 1. https://blog.csdn.net/qq_36122764/article/details/82429976
    // 2. https://blog.csdn.net/m0_38033475/article/details/79561369

    // vector 用 find 函式: https://blog.csdn.net/test1280/article/details/65937779

    // 可以用列表做，請參考吳大大的程式: https://github.com/sarah21392773/zerojudge/blob/main/APCS/e289.cpp


    ios::sync_with_stdio(0);
    cin.tie(0);
    //要加優化器，不然會TLE -- By 吳 大大

    int all,sub,beauty=0;
    cin>>sub>>all;
    map <string,bool> ribbon;
    for (int i=0;i<all;i++)
    {
        string now;
        cin>>now;

        while (  ribbon.size()>=sub || ribbon[now]==true )
        {
            ribbon.erase(ribbon.begin());

            //
            /*cout<<endl;
            cout<<"re"<<endl;
            for (string j:ribbon)
                cout<<j<<' ';
            cout<<endl;*/
        }

        ribbon[now]=true;

        if (ribbon.size()==sub)
            beauty++;

        //
        /*for (string j:ribbon)
            cout<<j<<' ';
        cout<<endl;*/

    }
    cout<<beauty;
    return 0;
}
