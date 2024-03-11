#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tot,h,m;
    cin>>tot>>h>>m;
    int every[tot],now_t=60*h+m;
    for (int i=0;i<tot;i++)
        cin>>every[i];
    int time[tot+1];
    for (int i=0;i<tot+1;i++)
    {
        if (i!=0)
            now_t+=every[i-1];
        time[i]=now_t;
    }

    int c;
    while (cin>>c)
    {
        if (c==0)
            return 0;
        int hr=time[c]/60,mi=time[c]%60;
        while(hr>=24)
            hr-=24;


        if (hr==0)
            cout<<"00";
        else if (hr<10)
            cout<<"0"<<hr;
        else
            cout<<hr;
        cout<<":";
        if (mi==0)
            cout<<"00";
        else if (mi<10)
            cout<<"0"<<mi;
        else
            cout<<mi;
        cout<<endl;

    }
}
