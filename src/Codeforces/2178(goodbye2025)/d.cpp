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
	vector<array<int, 2>> a(n);
	for (int i = 0; i < n; i ++) {
		cin >> a[i][0];
		a[i][1] = i + 1;
	}
	sort(a.begin(), a.end());
	if (n / 2 < m) {
		cout << -1 << '\n';
		return;
	}
	vector<array<int, 2>> ans;
	if (m == 0) {
		i64 pre = 0;
		for (int i = 0; i < n - 1; i ++) {
			pre += a[i][0];
		}
		if (pre < a[n - 1][0]) {
			cout << -1 << '\n';
			return;
		} 
		int idx = 0;
		while (a[n - 1][0] - a[idx][0] > 0) {
			ans.push_back({a[idx][1], a[n - 1][1]});
			a[n - 1][0] -= a[idx][0];
			idx ++;
		}
		for (int i = idx; i < n - 1; i ++) {
			ans.push_back({a[i + 1][1], a[i][1]});
		}
	} else {
		int idx = 0;
		while ((n - idx) / 2 > m) {
			ans.push_back({a[idx + 1][1], a[idx][1]});
			idx ++;
		}
		if ((n - idx) & 1) {
			ans.push_back({a[idx + 1][1], a[idx][1]});
			idx ++;
		}
		for (int i = idx, j = idx + m; j < n; i ++, j ++) {
			ans.push_back({a[j][1], a[i][1]});
		}
	}
	cout << ans.size() << '\n';
	for (auto [x, y] : ans) {
		cout << x << ' ' << y << '\n';
	}
}

signed main() {
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	cout << fixed << setprecision(10);
	int _ = 1;
	cin >> _;
	while (_ --) {
		solve();
	}
}