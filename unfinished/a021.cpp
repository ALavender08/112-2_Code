# include <bits/stdc++.h>
using namespace std;
int main()
{
    string n1,o,n2;
    cin>>n1>>o>>n2;
    int big;
    if (n1.size()>n2.size())
        big=n1.size();
    else
        big=n2.size();

    int sum[n1.size()+n2.size()]={0};

    //
    //cout<<big<<' '<<n1<<' '<<o<<' '<<n2<<endl;
    //cout<<n1.size()<<' '<<n2.size()<<' '<<n1.size()+n2.size()<<endl;


    if (o=="+")
    {
        for (int i=0;i<big;i++)
        {
            int l1,l2;
            if (i>=n1.size())
                l1=0;
            else
                l1=(int)(n1[n1.size()-1-i]-'0');
            if (i>=n2.size())
                l1=0;
            else
                l2=(int)(n2[n2.size()-1-i]-'0');
            sum[big-i-1]=l1+l2;

        }
    }
    else if (o=="-")
    {
        for (int i=0;i<big;i++)
        {
            int l1,l2;
            if (i>=n1.size())
                l1=0;
            else
                l1=(int)(n1[n1.size()-1-i]-'0');
            if (i>=n2.size())
                l1=0;
            else
                l2=(int)(n2[n2.size()-1-i]-'0');
            sum[big-i-1]=abs(l1-l2);

        }
    }
    else if (o=="*")
    {
        for (int m=0;m<n1.size();m++)
        {
            for (int n=0;n<n2.size();n++)
            {
                sum[n1.size()+n2.size()-n-1]=(int)(n2[n2.size()-n-1]-'0')*(int)(n1[n1.size()-m-1]-'0');

                //
                //cout<<(int)(n2[big-n-1]-'0')*(int)(n1[m]-'0')<<endl;
            }
        }

       //
    /*cout<<"處理前觀察: ";
    for (int j=0;j<n1.size()+n2.size();j++)
    {
        cout<<sum[j];
    }
    cout<<endl;
    */


        for (int i=0;i<n1.size()+n2.size();i++)
        {
            // sum[n1.size()+n2.size()-i-1] >> 比較大(個位
            // sum[n1.size()+n2.size()-i-2] >>比較小(十位
            if (sum[n1.size()+n2.size()-i-1]>=10)
            {
                int now=sum[n1.size()+n2.size()-i-1];
                sum[n1.size()+n2.size()-i-1]=now%10;
                sum[n1.size()+n2.size()-i-1-1]+=(now/10);

                //
                //cout<<n1.size()+n2.size()-i-1<<' '<<sum[n1.size()+n2.size()-i-1-1]<<' '<<now/10<<' '<<sum[n1.size()+n2.size()-i-1]<<' '<<now%10<<endl;

            }
        }

       //
    /*cout<<"處理後觀察: ";
    for (int j=0;j<n1.size()+n2.size();j++)
    {
        cout<<sum[j];
    }
    cout<<endl;
    */

    }
    bool canzero=true;
    for (int j=0;j<n1.size()+n2.size();j++)
    {
        if (sum[j]==0 && canzero)
            continue;

        cout<<sum[j];
        canzero=false;

    }

    return 0;
}
