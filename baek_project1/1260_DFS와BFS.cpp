#include<iostream>
#include<stack>
#include<queue>
#include<cstring>

using namespace std;

int graph[1001][1001];
queue<int> q;
stack<int> s;
bool check[1001];
int n,m,v;

void dfs(int v) {
	s.push(v);

	while (!s.empty()) {
		v = s.top();
		if (check[v] == 0) {
			cout << v << " ";
		}
		check[v] = 1;
		s.pop();

		for (int i = n; i > 0; i--) {
			if (graph[v][i] && !check[i]) {
				s.push(i);
			}
		}

	}
}
void bfs(int v) {
	check[v] = 1;
	q.push(v);

	while (!q.empty()) {
		v = q.front();
		q.pop();

		cout << v << " ";
		for (int i = 1; i <= n; i++) {
			if (graph[v][i] && !check[i]) {
				q.push(i);
				check[i] = 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	
	cin >> n >> m >> v;
	int temp1, temp2, init;
	memset(check, 0, sizeof(check));

	for (int i = 0; i < m; i++) {
		cin >> temp1 >> temp2;
		graph[temp1][temp2] = 1;
		graph[temp2][temp1] = 1;
	}

	init = v;
	dfs(v);
	cout << "\n";
	memset(check, 0, sizeof(check));
	v = init;
	bfs(v);

	return 0;
}