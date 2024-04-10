#include <bits/stdc++.h>
using namespace std;
int main()
{
    int all_l, sub_l,beauty=0;
    cin>>sub_l>>all_l;

    vector<string> sub;

    for (int i=0;i<all_l;i++)
    {
        string new_color;
        cin>>new_color;
        sub.push_back(new_color);
        if (sub.size()>sub_l)
            sub.erase(sub.begin());

        bool re=false; //沒出事
        int index=0;
        for (int j=0;j<sub.size()-1;j++)
        {
            if (sub[j]==new_color)
            {
                index=j;
                re=true;
                break;
            }
        }
        if (re)
        {
            for (int j=0;j<=index;j++)
                sub.erase(sub.begin());

        //
        /*
        cout<<"\n continue:"<<endl;
        for (int x=0;x<sub.size();x++)
            cout<<sub[x]<<" ";
        cout<<"beauty= "<<beauty<<' ';
        cout<<endl;
        cout<<endl;
        */


            continue;
        }
        if (sub.size()==sub_l)
            beauty++;



        //

/*
        for (int x=0;x<sub.size();x++)
            cout<<sub[x]<<" ";
        cout<<"beauty= "<<beauty<<' ';
        cout<<endl;
*/




    }

    cout<<beauty;
    return 0;


    }

