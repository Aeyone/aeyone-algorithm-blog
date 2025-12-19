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
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
	}
	if(n == 1) {
		cout << 0 << '\n';
		return;
	}
	vector<int> mx(n), mn(n);
	mx[0] = a[1] - a[0];
	mx[n - 1] = a[n - 1] - a[n - 2];
	for(int i = 1; i < n - 1; i ++) {
		mx[i] = min(a[i] - a[i - 1], a[i + 1] - a[i]);
	}
	
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