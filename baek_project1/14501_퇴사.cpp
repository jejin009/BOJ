#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int i, j, N, result= 0;
	int T[16] = { 0 };
	int P[16] = {0};
	int arr[16] = {0};

	cin >> N;
	int day = N + 1;

	for (i = 1; i < day; i++) {
		cin >> T[i] >> P[i];
	}

	for (i = 2; i < day; i++) {
		for (j = 1; j < i; j++) {
			if (j + T[j] <= i) {
				arr[i] = max(P[i] + arr[j], arr[i]);
			}
		}
	}
	for (i = 1; i < day; i++) {
		if (i + T[i] <= day)
			if (result < arr[i])
				result = arr[i];
	}


	cout << result;

	return 0;

}