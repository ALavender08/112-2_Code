#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
const int MAXW = 60005;
int w[MAXN], p[MAXN];
int K[MAXN][MAXW];

int main(){
	int n;
	while(cin >> n){
		for(int i = 1; i <= n; i++)
			cin >> w[i] >> p[i];
		for(int i = 0; i <= _________; i++){
			for(int j = 0; j <= _________; j++){
				if(i == 0 || j == 0)  K[i][j] = _________;
				else if(_________)  K[i][j] = _________;
				else  K[i][j] = max(_________+_________, _________);
			}
		}
		cout << _________ << endl;
	}
	return 0;
}
