
#include<iostream>
using namespace std;
int main() {
	int N, max, min, upT, downR, X, sub, answer;
	int i = 0,j = 0;

	cin >> N >> min >> max >> upT >> downR;
	X = min;

	if (max - min < upT) {
		cout << -1;
		return 0;
	}

	while (N > 0) {
		i++;
		if (X + upT <= max) N--, X += upT;
		else {
			X -= downR;
			if (X <= min) X = min;
		}
	}
	cout << i;

	return 0;
}