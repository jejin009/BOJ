#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t, n, m;
	vector<int> answer;

	cin >> t;
	for (int testcase = 0; testcase < t; testcase++) {
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			int temp1, temp2;
			cin >> temp1 >> temp2;
		}

		answer.push_back(n - 1);
	}
	for (int testcase = 0; testcase < t; testcase++) {
		cout << answer.at(testcase) << "\n";
	}
	
	return 0;
}
