#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int x, y;
	vector<pair<int, int>> vec;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec.push_back(make_pair(y, x));
	}
	sort(vec.begin(), vec.end());

	vector<pair<int, int>> ::iterator iter;

	for (iter = vec.begin(); iter < vec.end(); iter++) {
		cout << iter->second << " " << iter->first << "\n";
	}
	return 0;
}