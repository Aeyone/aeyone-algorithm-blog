#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

using i128 = __int128;
using u128 = unsigned __int128;

#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3fLL

const int MOD = 998244353;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<pair<i64, int>> a(n);
	for(int i = 0; i < n; i ++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end());
	vector<int> id(n);
	for(int i = 0; i < n; i ++) {
		id[a[i].second] = i;
	}
	vector<vector<int>> g(n);
	vector<map<i64, i64>> mp(n);
	for(int i = 0; i < m; i ++) {
		int u, v;
		cin >> u >> v;
		u --, v --;
		u = id[u], v = id[v];
		g[u].push_back(v);
		mp[v][a[u].first] ++;
	}
	i64 ans = m;
	for(int i = 0; i < n; i ++) {
		auto [e, u] = a[i];
		for(auto v : g[i]) {
			i64 dif = a[v].first - e;
			if(mp[i].find(dif) != mp[i].end()){
				i64 cnt = mp[i][dif];
				mp[v][e] = (mp[v][e] + cnt) % MOD;
				ans = (ans + cnt) % MOD;
			}
		}
	}
	cout << ans << '\n';
}

signed main() {
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	cout << fixed << setprecision(10);
	int _ = 1;
	cin >> _;
	while (_ --){
		solve();
	}
}