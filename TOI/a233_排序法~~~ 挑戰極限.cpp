#include <bits/stdc++.h>
using namespace std;

int select (int arr[], int siz)
{
    /*
    選擇排序:
    從第一個開始和所有數比較，若遇到比該數小的就換小數與接下來的數比較，原數則取代小數位置，一輪比完小數改到最一開始比較的數的位置
    一輪結束最小數會排好
    */
    for (int i=0;i<siz-1;i++)
    {
        int mini=i;
        for (int j=i+1;j<siz;j++)
        {
            if (arr[mini]>arr[j])
                mini=j;
        }
        swap(arr[i],arr[mini]);
    }

}

int bubble (int arr[], int siz)
{
    
    /*
    氣泡排序:
    從第一個開始兩兩比較，如果後者小、前者大就交換位置
    一輪結束最大數會排好
    */
    for (int i=0;i<siz-1;i++)
    {
        for (int j=0;j<siz-i-1;j++)
        {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }

    }

}

int main()
{
    int si;
    cin>>si;
    int a[si];
    for (int i=0;i<si;i++)
        cin>>a[i];
    //select(a,si);
    //bubble(a,si);

    //內建涵式: sort(列表, 列表+列表內容總數)
    sort(a,a+si);
    
    for (int i=0;i<si;i++)
    {
        cout<<a[i];
        if (i!=i-1)
            cout<<" ";
    }
    return 0;

}

