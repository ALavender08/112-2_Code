#include <bits/stdc++.h>
using namespace std;
const int MAXN = 805;
const int MAXM = 10005;
bool G[MAXN][MAXM];
bool isVisited[MAXN];
int n, m;

void DFS(int curr){

    /// 有三行
	stack<int> s;
	s.push(curr);
	isVisited[curr] = 1;

	while(s.size() > 0){

            // 有兩行
            curr = s.top();
            s.pop();  // 檢查過就要丟掉，不然會無限迴圈

		for(int i = 1; i <= n; i++){
			if(G[curr][i] && !isVisited[i]){

				// 有兩行
                s.push(i);
		        isVisited[i] = 1;

			}

		}
	}
}


int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		G[x][y] = 1;
	}
	int a, b;
	cin >> a >> b;
	DFS(a);
	if(isVisited[b])	cout << "Yes";
	else	cout << "No";
	return 0;
}

/*
    演算法：
    建立堆疊
    將起始點推入堆疊
    將起始點標記為已拜訪
    只要堆疊不是空的：
        鎖定目前拜訪的點
        把這個點移出堆疊
        檢查所有的點：
            只要跟目前拜訪的點相鄰，且沒有被拜訪過
            就將這個點推入堆疊
            並將這個點標記為已經拜訪過了
*/


/*

程式碼選項（都會出現一次，請思考出現順序）：
  curr = s.top();
  isVisited[curr] = 1;
  isVisited[i] = 1;
  stack<int> s;
  s.pop();
  s.push(i);
  s.push(curr);

*/
