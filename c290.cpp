# include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int odd=0, even=0;
    for (int i=1; i<=s.size();i++)
    {
        if (i%2==0)
            even+=s[i-1]-'0';
        else
            odd+=s[i-1]-'0';
    }

    //
    //cout<<odd<<endl;
    //cout<<even<<endl;

    if (even>odd)
        cout<<even-odd;
    else
        cout<<odd-even;
    return 0;

    /*
    ª`·N:¥Îstringºâ
    */
}
