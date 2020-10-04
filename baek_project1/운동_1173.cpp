#include<iostream>
using namespace std;

int main() {
	int N, max, min, upT, downR, X, sub, answer;
	int i = 0;

	cin >> N >> min >> max >> upT >> downR;
	X = min;

	if (X + (N * upT) < max) answer = N;
	else {
		sub = X + (N * upT) - max;
		if (sub % downR) answer = sub / downR + 1 + N;
		else answer = sub / downR + N;
	}

	cout << answer;

	return 0;
}