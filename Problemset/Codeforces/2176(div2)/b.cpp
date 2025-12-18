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
	string s;
	cin >> s;
	vector<int> a;
	for(int l = 0, r = 0; l < n; l = r) {
		while(r < n && s[l] == s[r]) {
			r ++;
		}
		if(s[l] == '0') {
			a.push_back(r - l);
		}
	}
	int ans = (a.size() ? *max_element(a.begin(), a.end()) : 0);
	if(s[0] == '0' && s[0] == s[n - 1] && a.size() != 1) {
		ans = max(ans, a.front() + a.back());
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