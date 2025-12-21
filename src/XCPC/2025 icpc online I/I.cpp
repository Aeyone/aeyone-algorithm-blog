#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

const i64 infll = 0x3f3f3f3f3f3f3f3f;

void solve(){
	int n, m, V, T;
	cin >> n >> m >> V >> T;
	T --;	
	vector<vector<array<int, 2>>> g(n);
	for(int i = 0; i < m; i ++){
		int u, v, w;
		cin >> u >> v >> w;
		u -- , v --;
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}
	vector<array<i64, 2>> dist(n, {infll, infll});
	priority_queue<array<i64, 3>, vector<array<i64, 3>>, greater<array<i64, 3>>> heap;
	vector<int> vis(n);

	dist[T] = {1, 0};
	heap.push({1, 0, T});

	while(heap.size()){
		auto now = heap.top();
		heap.pop();
		int u = now[2];
		vis[u] = true;
		// cout << "now = " << now[0] << ' ' << now[1] << ' ' << now[2] << '\n';
		for(auto [v, w] : g[u]){
			i64 x = dist[u][0], y = dist[u][1] + w;
			if(y > V)
				x ++, y = w;

			if(dist[v][0] > x || (dist[v][0] == x && dist[v][1] > y)){
				dist[v][0] = x;
				dist[v][1] = y;
				if(!vis[v])
					heap.push({x, y, v});
			}
		}
	}
	
	for(int i = 0; i < n; i ++){
		if(dist[i][0] == infll)
			cout << -1 << ' ';
		else
			cout << dist[i][0] << ' ';
	}
	cout << '\n';
	// auto dfs = [&](auto &&self, int u, int fa)->void{
	// 	for(auto [v, w] : g[u]) if(v != fa){
	// 		i64 x = dist[u][0], y = dist[u][1] + w;
	// 		if(y > V)
	// 			x ++, y = w;
	// 		if(dist[v][0] > x || (dist[v][0] == x && dist[v][1] > y)){
	// 			dist[v][0] = x;
	// 			dist[v][1] = y;
	// 			self(self, v, u);
	// 		}
	// 	}
	// };
	// dist[T] = {1, 0};
	// dfs(dfs, T, -1);


	// queue<int> q;
	// q.push(T);
	// dist[T] = {1, 0};
	// while(q.size()){
	// 	int u = q.front();
	// 	q.pop();
	// 	for(auto [v, w] : g[u]){
	// 		i64 cnt = dist[u][0], cur = dist[u][1] + w;
	// 		if(cur > V)
	// 			cnt ++, cur = w;
	// 		if(dist[v][0] > cnt || (dist[v][0] == cnt && dist[v][1] > cur)){
	// 			dist[v][0] = cnt, dist[v][1] = cur;
	// 			q.push(v);
	// 		}
	// 	}
	// }
}

signed main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int _ = 1;
	// cin >> _;
	while(_ --)
		solve();
}