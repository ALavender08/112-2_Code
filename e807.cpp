#include <bits/stdc++.h>
using namespace std;
int main()
{
    float rain[7][4],day,d_big=0,time,t_big=0;
    for (int i=0;i<7;i++)
    {
        for (int j=0;j<4;j++)
            cin>>rain[i][j];
    }

    for (int i=0;i<7;i++)
    {
        float d=0;
        for (int j=0;j<4;j++)
            d+=rain[i][j];
        if (d>d_big)
            {
                day=i+1;
                d_big=d;
            }
    }

    for (int i=0;i<4;i++)
    {
        float t=0;
        for (int j=0;j<7;j++)
            t+=rain[j][i];
        if (t>t_big)
            {
                time=i;
                t_big=t;
            }
    }


    cout<<day<<endl;

    if (time==0)
        cout<<"morning";
    else if (time==1)
        cout<<"afternoon";
    else if (time==2)
        cout<<"night";
    else
        cout<<"early morning";
    return 0;

    /*
    ���D���:
    1.���D�N��J�U�ѦU�ɬq���B�q
    2.�[�`�U�ѫB�q�ç�X�̤j��
    3.�[�`�U�ɬq�B�q�ç�X�̤j��
    4.��X�̤j�Ȫ��ѡB�ɬq
    */

}
