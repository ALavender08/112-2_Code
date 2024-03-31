#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i1=0,i2=0;

    for (int i=s1.size()-1;i>=0;i--)
    {
        i1+=(int)(s1[i]-'0')*pow(10,s1.size()-i-1);
    }

    for (int i=s2.size()-1;i>=0;i--)
    {
        i2+=(int)(s2[i]-'0')*pow(10,s2.size()-i-1);
    }

    ///條件還沒想好
    cout<<(int)(((float)abs(i1-i2)/2)+0.9);
    return 0;
}
