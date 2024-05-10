#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    解題前廢話:
      1. 感覺可以用map做，但我忘了語法呵呵，有機會試試
      2. sort 好用欸 ╰(*°▽°*)╯
      3. 這程式其實滿短的，主要是我在廢話 XD
    */

    /*
    輸出說明:
     1. 能組幾組牌看 整副牌出現最少次的牌的出現次數
     2. 剩幾張牌 = 整副牌出現最多次的牌的出現次數 * 52 - 所有牌的總出現次數(輸入次數)
    */

    int n;
    cin>>n;

    int poker[53]={0};
    // poker >> 紀錄52張牌各出現幾次

    for (int j=0;j<n;j++)
    {
        int card;
        cin>>card;
        poker[card]++;

    }

    sort(poker,poker+53);
    // 排序(由小到大)


    cout<<poker[1]<<' '<<52*poker[52]-n;
    // poker[1] 為最小值(出現最少次數)
    // poker[0] 無意義，為了方便所以陣列大小用53

    return 0;
}
