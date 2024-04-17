#include <bits/stdc++.h>
using namespace std;

//int l[31]={-1};
int F(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return F(n-1) + F(n-2);

}
int main()
{
    int N;
    while (cin>>N)
    {
        cout<<F(N)<<endl;
    }
    return  0;
}
