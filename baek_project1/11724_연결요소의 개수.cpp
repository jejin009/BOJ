#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<int> graph [1001];
bool check[1001];
int n, m;

void dfs(int v) {
	check[v] = true;



	for (int i = 0; i < graph[v].size(); i++)

	{

		int next = graph[v][i];

		if (!check[next])

			dfs(next);

	}
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	int temp1, temp2, count = 0;
	memset(check, 0, sizeof(check));

	for (int i = 0; i < m; i++) {
		cin >> temp1 >> temp2;
		graph[temp1].push_back(temp2);
		graph[temp2].push_back(temp1);

	}

	for (int i = 1; i < n + 1; i++) {
		if (check[i] == 0) {
			dfs(i);
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}