#include<iostream>

using namespace std;

int n, m;
int arr[9] = { 0, };
bool visited[9] = { 0, };

void dfs(int count) {
	if (count == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i < n+1;i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[count] = i;
			dfs(count + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;

	dfs(0);

}