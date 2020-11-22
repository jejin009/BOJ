#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int paper[6561][6561] = {0,};

void print_star(int x, int y, int length) {
	if (length > 1) {	
		int next_length = length / 3;
		int mask[3] = { 0 , next_length, next_length*2 };
		for(int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (j != 1 || i != 1)
					print_star(x + mask[i], y + mask[j], next_length);
			}
		}
	}
	else {
		paper[x][y] = 1;
	}
	

}

int main() {

	int n;

	cin >> n;

	print_star(0 , 0, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (paper[i][j] == 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}