#include <iostream>
#include <algorithm>

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int i, N, result= 0;
	int T[16] = {0,};
	int P[16] = {0,};
	int arr[16] = {0,};

	cin >> N;
	int day = N + 1;

	for (i = 0; i < N; i++) {
		cin >> T[i] >> P[i];
	}

	for (i = 0; i < N; i++) {
		if (i + T[i] <= N) {
			arr[i + T[i]] = max(arr[i + T[i]], arr[i] + P[i]);

			result = max(result, arr[i + T[i]]);
		}
		arr[i + 1] = max(arr[i + 1], arr[i]);

		result = max(result, arr[i + 1]);
	}

	cout << result;

	return 0;

}