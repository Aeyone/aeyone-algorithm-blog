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
	string s;
	cin >> s;
	int n = s.size();
	int ans = (s[0] == 'u');
	for (int l = 1, r = 1; l < n; l = r) {
		while (r < n && s[l] == s[r]) {
			r ++;
		}
		if(s[l] == 's') {
			continue;
		}
		ans += (r - l) / 2;
		ans += (r == n && (r - l) & 1);
	}
	cout << ans << '\n';
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