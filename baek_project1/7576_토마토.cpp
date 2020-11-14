#include<iostream>
#include<queue>

using namespace std;

int box[1001][1001];
int mask_x[4] = { -1,0,1,0 };
int mask_y[4] = { 0,1,0,-1 };
int m, n;
queue<pair<int, int>> q;

void is_ready() {

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int x0 = x + mask_x[i];
			int y0 = y + mask_y[i];

			if (x0 > 0 && y0 > 0 && x0 <= n && y0 <= m) {
				if (box[x0][y0] == 0) {
					box[x0][y0] = box[x][y] + 1;
					q.push(make_pair(x0, y0));
				}
			}
		}
	}

	
}

int main() {
	int max = 0;

	cin >> m >> n;

	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < m+1; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1) {
				q.push(make_pair(i, j));
			}
		}
	}

	is_ready();

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			if (box[i][j] > max) {
				max = box[i][j];
			}
			if (box[i][j] == 0) {
				cout << "-1" << "\n";
				return 0;
			}
		}
	}

	cout << max - 1 << "\n";

	return 0;
}