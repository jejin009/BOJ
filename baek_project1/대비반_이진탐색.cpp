#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
	int T, key = 0;
	int i;
	vector<int> arr;

	cin >> T;
	arr.resize(T);

	for (i = 0; i < T; i++) {
		cin >> arr[i];
	}

	cin >> key;

	cout << solve()<< endl;


	return 0;
}
int solve(int s, int e) {
	int m;
	while (e - s > 0) {
		m = (s + e) / 2
			;
		if (arr[m] < k) s = m + 1;
		else e = m;
	}
	return e + 1;
}
// find 함수도 사용 가능
// max함수도 사용 가능하다

