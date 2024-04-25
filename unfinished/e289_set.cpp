#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sub,all,beauty=0;
    cin>>sub>>all;
    set <string> ribbon;
    for (int i=0;i<all;i++)
    {
        string now;
        cin>>now;

        while ( ribbon.size()==sub || ribbon.count(now) )
        {
            ribbon.erase(ribbon.begin());
        }

        ribbon.insert(now);

        if (ribbon.size()==sub)
            beauty++;

    }
    cout<<beauty;
    return 0;
}
