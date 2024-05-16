#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans_index,ans_num;
    cin>>n>>ans_index>>ans_num;
    int tar[n],time=0;
    for (int i=0;i<n;i++)
    {
        cin>>tar[i];
    }

    int index=0;
    while (tar[index]!=ans_num || ans_index!=1)
    {
        if (tar[index]==-1)
        {
            index++;
            time++;
            continue;
        }

        if (tar[index]==ans_num)
            ans_index--;
        int shot=tar[index];
        tar[index]=-1;
        if (tar.find(shot)!=-1)
            tar[tar.find(shot)]=-1;
        index++;
        time++;


    }

    cout<<time;
    return 0;

}
