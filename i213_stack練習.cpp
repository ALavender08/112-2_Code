#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> sta;
    int s;
    cin>>s;
    for (int i=0;i<s;i++)
    {
        int step;
        cin>>step;
        if (step==1)
        {
            int n;
            cin>>n;
            sta.push(n);
        }
        else if (step==2)
        {
            if (!sta.empty())
                cout<<sta.top()<<endl;
            else
                cout<<-1<<endl;
        }
        else if (step==3)
        {
            if (!sta.empty())
                sta.pop();
        }
    }
    return 0;
}
