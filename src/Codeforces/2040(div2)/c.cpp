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
	i64 n, k;
	cin >> n >> k;
	if (n < 60 && k > (1ll << n - 1)) {
		cout << -1 << '\n';
		return;
	}
	k --;
	deque<int> q;
	q.push_back(n);
	int num = n - 1;
	for (int i = 0; k >> i > 0; i ++, num --) {
		if (k >> i & 1) {
			q.push_back(num);
		} else {
			q.push_front(num);
		}
	}
	while (num > 0) {
		q.push_front(num --);
	}
	while (q.size()) {
		cout << q.front() << ' ';
		q.pop_front();
	}
	cout << '\n';
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