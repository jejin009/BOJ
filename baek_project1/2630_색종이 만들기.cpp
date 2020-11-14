#include<iostream>

using namespace std;
int blue = 0;
int white = 0;
int paper[128][128];

void divide(int x, int y, int length) {
	int count = 0;

	for (int i = x; i < (x + length); i++) {
		for (int j = y; j < (y + length); j++) {
			count += paper[i][j];
		}
	}

	if (count == (length * length)) {
		blue++;
	}
	else if (count == 0) {
		white++;
	}
	else {
		divide(x, y, length / 2);
		divide(x + length / 2, y, length / 2);
		divide(x, y + length / 2, length / 2);
		divide(x + length / 2, y + length / 2, length / 2);
	}
}
void main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
	divide(0, 0, n);

	cout << white<< "\n" << blue << "\n";
}