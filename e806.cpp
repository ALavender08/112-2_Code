#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int pow1[n1],c1[n1];
    for (int i=0;i<n1;i++)
    {
        cin>>pow1[i]>>c1[i];
    }

    int n2;
    cin>>n2;
    int pow2[n2],c2[n2];
    for (int i=0;i<n2;i++)
    {
        cin>>pow2[i]>>c2[i];
    }

    int biggest_p=0;
    for (int i=0;i<n1;i++)
    {
        if (pow1[i]>biggest_p)
            biggest_p=pow1[i];
    }
    for (int i=0;i<n2;i++)
    {
        if (pow2[i]>biggest_p)
            biggest_p=pow2[i];
    }

    int pow[biggest_p+1],c[biggest_p+1];

    for (int i=0;i<=biggest_p;i++)
    {
        pow[i]=i;
        int x1=0,x2=0; //x1,x2=該次方係數
        for (int a=0;a<n1;a++)
        {
            if (pow1[a]==i)
            {
                x1=c1[a];
                break;
            }
        }
        for (int b=0;b<n2;b++)
        {
            if (pow2[b]==i)
            {
                x2=c2[b];
                break;
            }
        }
        c[i]=x1+x2;
    }
    bool nothing=true;
    for (int i=biggest_p;i>=0;i--)
    {
        if (c[i]==0)
            continue;
        cout<<pow[i]<<":"<<c[i];
        if (i!=0)
            cout<<endl;
        nothing=false;
    }
    if (nothing)
        cout<<"NULL!";
    return 0;

}



