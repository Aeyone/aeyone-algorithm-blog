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
	int n;
	cin >> n;
	vector<int> a(n);
	bool ok = false;
	i64 sum1 = 0, sum2 = 0;
	int idx = 0;
	for (int i = 0; i < n; i ++) {
		cin >> a[i];
		if (a[i] >= 0) {
			sum1 += a[i];
			idx = i;
		} else {
			sum2 -= a[i];
		}
	}
	if (sum1 == 0) {
		cout << sum2 + a[0] << '\n'; //留下第一个，保证有正数
		return;
	}
	int la = INF;
	for (int i = idx; i < n; i ++) {
		la = min(la, abs(a[i]));
	}
	if (a[0] >= 0) {
		cout << sum1 + sum2 - la << '\n';//去掉正数后缀最小
	} else {
		cout << sum2 + max((i64)a[0] - sum1, 2ll * a[0] + sum1 - la) << '\n';//留下第一个
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