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
	vector<int> odd, even;
	for(int i = 0; i < n; i ++) {
		int x;
		cin >> x;
		if(x & 1) {
			odd.push_back(x);
		}else {
			even.push_back(x);
		}
	}
	if(odd.size() == 0) {
		for(int i = 1; i <= n; i ++) {
			cout << 0 << ' ';
		}
		cout << '\n';
		return;
	}
	int mxodd = *max_element(odd.begin(), odd.end());
	if(even.size() == 0) {
		for(int i = 1; i <= n; i ++) {
			if(i & 1) {
				cout << mxodd << ' ';
			}else {
				cout << 0 << ' ';
			}
		}
		cout << '\n';
		return;
	}
	sort(even.begin(), even.end(), greater<int>{});
	int m = even.size();
	vector<i64> pre(m);
	pre[0] = even[0];
	for(int i = 1; i < m; i ++) {
		pre[i] = pre[i - 1] + even[i];
	}
	cout << mxodd << ' ';
	for(int i = 0; i < m; i ++) {
		cout << mxodd + pre[i] << ' ';
	}
	for(int i = 1; i < odd.size(); i ++) {
		if(2 * ((i + 1) / 2) + 1 > odd.size()) {
			cout << 0 << ' ';
			continue;
		}
		if(i & 1) {
			cout << mxodd + pre.back() - even.back() << ' ';
		}else {
			cout << mxodd + pre.back() << ' ';
		}
	}
	cout << '\n';
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