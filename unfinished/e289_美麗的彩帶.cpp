#include <bits/stdc++.h>
using namespace std;
int main()
{
    int all_l, sub_l,beauty=0;
    cin>>sub_l>>all_l;
    int l[all_l];
    for (int i=0;i<all_l;i++)
    {
        cin>>l[i];
    }

    for (int i=0;i<all_l-sub_l+1;i++)
    {
        int beau[sub_l];
        bool beautiful=true;
        for (int j=0;j<sub_l;j++)
        {
            beau[j]=l[i+j];
        }

        for (int m=0;m<sub_l;m++)
        {
            for (int n=0;n<m;n++)
            {
                if (beau[m]==beau[n])
                    beautiful=false;
            }
        }
        if (beautiful)
            beauty++;

        //
        /*
        for (int x=0;x<sub_l;x++)
            cout<<beau[x]<<" ";
        cout<<endl;
        */

    }
    cout<<beauty;
    return 0;
}
