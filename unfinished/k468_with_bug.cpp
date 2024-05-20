#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans_index,ans_num; // n 標靶數， ans_index 第幾個，ans_num 數字類型
    cin>>n>>ans_index>>ans_num;
    int time=0,tar[n];  //time 打靶次數，tar 靶位編號
    map <int,int> cou_tar;
    for (int i=0;i<n;i++)
    {
        cin>>tar[i];
        if (cou_tar.count(tar[i])) // >0 就是 true
            cou_tar[tar[i]]++;
        else
            cou_tar[tar[i]]=1;

    }

    int index=0; //正在檢查的索引值
    while ((tar[index]!=ans_num || ans_index!=1) && index<n)
    {
        if (tar[index]==-1)
        {
            index++;
            continue;
        }

        if (tar[index]==ans_num)
            ans_index--;
        int shot=tar[index];
        tar[index]=-1; //被打掉
        if (cou_tar.count(shot))
        {
            cou_tar[shot]--;
            for (int i=index+1;i<n;i++)
            {
                if (tar[i]==shot)
                {
                    if (tar[i]==ans_num)
                        ans_index--;
                    tar[i]=-1;
                    break;
                }
            }
        }

        index++;
        time++;

        //
        /*
        cout<<index<<": ";
        for (int i=0;i<n;i++)
            cout<<tar[i]<<' ';
        cout<<endl;
        */



    }

    cout<<time;
    return 0;
    //time問題
}
