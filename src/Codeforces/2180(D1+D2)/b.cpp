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
	vector<string> a(n);
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
	}
	string cur;
	for(int i = 0; i < n; i ++) {
		string s1 = a[i] + cur;
		string s2 = cur + a[i];
		if(s1 < s2) {
			cur = a[i] + cur;
		}else{
			cur = cur + a[i];
		}
	}
	cout << cur << '\n';
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