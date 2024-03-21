#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int l[r+2][c+2], small=1000000 , small_i, small_j;
    for (int i=0;i<r+2;i++)
    {
        for (int j=0;j<c+2;j++)
            l[i][j]=-1;
    }

    for (int i=1;i<=r;i++)
    {
        for (int j=1;j<=c;j++)
        {
            cin>>l[i][j];
            if (l[i][j]<small)
            {
                small=l[i][j];
                small_i=i;
                small_j=j;
            }
        }
    }

    int step=small;

    while (true)
    {

        //
        //cout<<small_i<<" "<<small_j<<endl;

        l[small_i][small_j]=-1;

        int next=1000000,next_i,next_j;
        for (int i=small_i-1;i<=small_i+1;i++)
        {
            if (i==small_i)
                continue;
            else if (l[i][small_j]==-1)
                continue;
            if (l[i][small_j]<next)
            {
                next=l[i][small_j];
                next_i=i;
                next_j=small_j;
            }
        }

        for (int j=small_j-1;j<=small_j+1;j++)
        {
            if (j==small_j)
                continue;
            else if (l[small_i][j]==-1)
                continue;
            if (l[small_i][j]<next)
            {
                next=l[small_i][j];
                next_i=small_i;
                next_j=j;

            }
        }
        if (next==1000000)
            break;
        step+=next;
        small_i=next_i;
        small_j=next_j;


    }
    cout<<step;
    return 0;

    /*
    ���D���:
    1. ���D�N��J��P�C
    2. �]�ߤG���}�C(���𵦲�)�ó]���O�ܼưO���̤p�ȡB�̤p�Ȫ��C���ޭȡB�̤p�Ȫ�����ޭ�
    3. ��l�ƤG���}�C�è��D�N��J�U���A�P�ɧ�X�̤p�ȤΨ�Ҧb�����ޭ�
    4. �]�@�ܼưO�������Ʀr�A�i�H���[�_�l��m(��ӦC��̤p��)
    5. �i�J while �j��A���N�_�l�I�אּ-1�A�קK���ƨ���A
       �A�i�J��� for �j��A���O�P�_�W�U���k���ƭ��ӳ̤p�A�P�ɰO������ޭȡA
       ���X for �j���P�_�O�_�٦��U�@�B�i�H���A����N���X while �j��A
       �i�H���ܱN���L�����[�W�U�@�B���Ʀr�A�ñN�_�l�I�����ޭȧאּ�U�@�B�����ޭȡA�~��U�@�����P�_
    6. ���X while �j����X���L����������
    */


}
