#include <bits/stdc++.h>
using namespace std;
int main()
{
    int short_line;
    cin>>short_line;
    int long_line=2*short_line,right_line=short_line,left_line;
    if (right_line%2==0)
        left_line=right_line/2;
    else
        left_line=(right_line+1)/2;

    //row=short_line=right_line
    //col=short_line+long_line+right_line+left_line-3
    int row=short_line, col=short_line+long_line+right_line+left_line-3;
    char l[row][col];
    int nowcol;

    //初始化
    for (int r=0;r<row;r++)
    {
        for (int c=0;c<col;c++)
            l[r][c]=' ';
    }

    //長邊
    for (int i=0;i<long_line;i++)
    {
        l[0][col-i-1]='*';
    }

    //短邊
    for (int i=0;i<short_line;i++)
    {
        l[row-left_line][i]='*';
    }

    //左斜線
    for (int i=1;row-left_line+i<row;i++)
    {
        l[row-left_line+i][short_line+i-1]='*';
        nowcol=short_line+i-1;
    }

    //右斜線
    for (int i=1;i<=right_line-2;i++)
    {
        l[row-1-i][nowcol+i]='*';
    }

    //輸出
    for (int r=0;r<row;r++)
    {
        for (int c=0;c<col;c++)
            cout<<l[r][c];
        if (r!=row-1)
            cout<<endl;
    }


}
