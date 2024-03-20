#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

bool comp(const point&lhs, const point&rhs)
{
    if (lhs.x == rhs.x)
        return lhs.y < rhs.y;
    else
        return lhs.x < rhs.x;

}
//�^��1(True) : ���ӰѼƦb�e

int main()
{
    int n;
    cin>>n;
    point P[n];
    for (int i=0;i<n;i++)
    {
        cin>>P[i].x>>P[i].y;
    }

    sort(P, P+n, comp);

    for (int i=0;i<n;i++)
    {
        cout<<P[i].x<<" "<<P[i].y;
        if (i!=n-1)
            cout<<endl;
    }
    return 0;

    /*
    ���D���(�ڪ��z�ѡA���O�ҹ�):
    1. �ؤ@��struct
    2. comp�^�Ǫ��O���L�ȡA�p�G�^��1�N���ӰѼƦb�e
    (�ڪ��z��: �p�G True �A �A���g�L�N����(�����쪬)
               �p�G False �A �h�ϹL��)
    3. ��J�y���I�ƨñN�]�@�յ��c��(struct)���ƶq(?
    4. �̧ǿ�J�U���c�骺x�By��
    5. �Ƨǵ��c��
    (�ڪ��z��: sort(���c��զW��, ���c��զW��+�`�� , �̾�comp�ӱ�) ��?)
    6. �̧ǿ�X
    */


}
