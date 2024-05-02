#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int stu[num],highest_not_pass=-1,lowest_pass=101;
    bool best=true,worst=true;

    for (int i=0;i<num;i++)
        cin>>stu[i];

    sort(stu,stu+num);

    for (int i=0;i<num;i++)
    {
        if (stu[i]>=60 && stu[i]<lowest_pass)
        {
            //有人及格
            worst=false;
            lowest_pass=stu[i];
        }
        else if (stu[i]<60 && stu[i]>highest_not_pass)
        {
            //有人不及格
            best=false;
            highest_not_pass=stu[i];
        }
    }

    for (int i=0;i<num;i++)
        {
            cout<<stu[i];
            if (i!=num-1)
                cout<<' ';
        }
    cout<<endl;

    if (best)
        cout<<"best case";
    else
        cout<<highest_not_pass;
    cout<<endl;

    if (worst)
        cout<<"worst case";
    else
        cout<<lowest_pass;
    cout<<endl;

    return 0;

}
