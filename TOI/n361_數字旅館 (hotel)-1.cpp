#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    for (int i=0;i<n;i++)
        {
            cin>>x;

            bool l[4];
            int re=0;
            for (int j=0;j<4;j++)
            {
                l[j]=false;
            }

            if (x%3==0 && x%2==0)
            {
                l[1]=true;
                re++;
            }

            if (x%10%2==1 && x%3!=0)
            {
                l[2]=true;
                re++;
            }

            bool s=false;
            int t=2;


            if ((x%7!=0 && x%2==0) || (float)sqrt(x)==(int)sqrt(x))
            {
                l[3]=true;
                re++;
            }

            if (re>2)
            {
                l[0]==true;
            }


            if (l[0] || l[1])
                cout<<1;
            else if (l[2])
                cout<<2;
            else if (l[3])
                cout<<3;
            else
                cout<<0;
            if (i!=n-1)
                cout<<" ";

        }
    return 0;

    /*
    解題思路:
    1. 輸入要檢查的次數
    2. 進入 for 迴圈，輸入房號，並初始化一個布林陣列、設一遍數計算這個房號能入住幾種方案
    3. 一號樓及二號樓按題目給的條件判斷即可
    4. 三號樓的條件是「或」，此處用內建函式判斷是否為完全平方數
    5. 判斷住哪號樓時順便紀錄有幾種樓符合條件
    6. 輸出房客要住幾號樓
    */

}
