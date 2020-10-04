#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int N, temp_x, temp_y;
	vector<pair<int, int>> vec;

	cin >> N;
	vec.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i].first >> vec[i].second;
	}

	sort(vec.begin(), vec.end());

	vector<pair<int, int>> ::iterator iter;
	
	for (iter = vec.begin(); iter < vec.end(); iter++) {
		cout << iter->first <<" "<< iter->second << "\n";
	}
	
	return 0;
}