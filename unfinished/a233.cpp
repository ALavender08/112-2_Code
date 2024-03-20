#include <bits/stdc++.h>
using namespace std;

int select (int arr[], int siz)
{
    //選擇排序
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
    //氣泡排序
    /*
    從第一個開始
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
    sort(a,a+si);
    for (int i=0;i<si;i++)
    {
        cout<<a[i];
        if (i!=i-1)
            cout<<" ";
    }
    return 0;

}

