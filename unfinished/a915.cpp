#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

bool comp(const point&lhs, const point&rhs)
{
    if (lhs.x > rhs.x)
        return lhs.x > rhs.x;
    return lhs.y < rhs.y;
}

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


}
