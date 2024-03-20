#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int pow1[n1],c1[n1];
    for (int i=0;i<n1;i++)
    {
        cin>>pow1[i]>>c1[i];
    }

    int n2;
    cin>>n2;
    int pow2[n2],c2[n2];
    for (int i=0;i<n2;i++)
    {
        cin>>pow2[i]>>c2[i];
    }

    int biggest_p=0;
    for (int i=0;i<n1;i++)
    {
        if (pow1[i]>biggest_p)
            biggest_p=pow1[i];
    }
    for (int i=0;i<n2;i++)
    {
        if (pow2[i]>biggest_p)
            biggest_p=pow2[i];
    }

    int pow[biggest_p+1],c[biggest_p+1];

    for (int i=0;i<=biggest_p;i++)
    {
        pow[i]=i;
        int x1=0,x2=0; //x1,x2=該次方係數
        for (int a=0;a<n1;a++)
        {
            if (pow1[a]==i)
            {
                x1=c1[a];
                break;
            }
        }
        for (int b=0;b<n2;b++)
        {
            if (pow2[b]==i)
            {
                x2=c2[b];
                break;
            }
        }
        c[i]=x1+x2;
    }
    bool nothing=true;
    for (int i=biggest_p;i>=0;i--)
    {
        if (c[i]==0)
            continue;
        cout<<pow[i]<<":"<<c[i];
        if (i!=0)
            cout<<endl;
        nothing=false;
    }
    if (nothing)
        cout<<"NULL!";
    return 0;

    /*
    解題思路:
    1.分別設四個列表紀錄「第一式次方」、「第一式係數」、「第二式次方」、「第二式係數」
    2.設一變數紀錄最大次方並用兩迴圈找出
    3.再設兩列表紀錄「和的次方」、「和的係數」
    4.找到同一次方後將前後兩式係數相加
    5.輸出時，若某項係數為0，記得跳過；設一個布林變數紀錄是否有輸出東西，沒有的話要輸出"NULL"
    */

}



