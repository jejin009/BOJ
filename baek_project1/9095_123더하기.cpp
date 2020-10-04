#include<iostream>
#include<vector>
using namespace std;

int main() {
	int T, x, i, test_case;
	vector<int> arr;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++) {
		cin >> x;
		arr.resize(x + 1);
		arr[0] = 1;
		arr[1] = 1;
		arr[2] = 2;

		for (i = 3; i <= x; i++) {
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}
		cout << arr[x]<<endl;
	}
	

	return 0;
}