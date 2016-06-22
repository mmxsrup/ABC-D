//最小カット問題
/*最小カット最大フロー定理 
-グラフの最小カットは最大フローと一致する
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)

bool ab[5000][5000];

int main(void{
	int n, g, e;
	cin >> n >> g >> e;
	vector<int> p(g);
	rep(i, g) scanf("%d", &p[i]);
	int a, b;
	rep(i, e){
		scanf("%d %d", &a, &b);
		ab[a][b] = true;
	}
}