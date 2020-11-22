#include<iostream>
#include<queue>

using namespace std;

int box[101][101][101];
int mask_x[6] = { -1,0,1,0,0,0};
int mask_y[6] = { 0,1,0,-1,0,0};
int mask_z[6] = { 0,0,0,0,-1,1};
int m, n, h;
queue<pair<int, pair<int, int>>> q;

void is_ready() {

	while (!q.empty()) {
		int x = q.front().second.first;
		int y = q.front().second.second;
		int z = q.front().first;

		q.pop();

		for (int i = 0; i < 6; i++) {
			int x0 = x + mask_x[i];
			int y0 = y + mask_y[i];
			int z0 = z + mask_z[i];

			if (x0 > 0 && y0 > 0&& z0 > 0 && x0 <= n && y0 <= m && z0 <=h) {
				if (box[z0][x0][y0] == 0) {
					box[z0][x0][y0] = box[z][x][y] + 1;
					q.push(make_pair(z0,make_pair(x0, y0)));
				}
			}
		}
	}


}

int main() {
	int max = 0;

	cin >> m >> n >> h;

	for (int c = 1; c < h + 1; c++) {
		for (int i = 1; i < n + 1; i++) {
			for (int j = 1; j < m + 1; j++) {
				cin >> box[c][i][j];
				if (box[c][i][j] == 1) {
					q.push(make_pair(c, make_pair(i, j)));
				}
			}
		}
	}

	is_ready();

	for (int c = 1; c < h + 1; c++) {
		for (int i = 1; i < n + 1; i++) {
			for (int j = 1; j < m + 1; j++) {
				if (box[c][i][j] > max) {
					max = box[c][i][j];
				}
				if (box[c][i][j] == 0 ) {
					cout << "-1" << "\n";
					return 0;
				}
			}
		}
	}

	cout << max - 1 << "\n";

	return 0;
}