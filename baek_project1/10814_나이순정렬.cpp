#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int n, age;
	string name;
	vector<pair<int, string>> vec;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		vec.push_back(make_pair(age, name));
	}

	//sort¶û stable_sort
	stable_sort(vec.begin(), vec.end(), compare);

	vector<pair<int, string>> ::iterator iter;
	for (iter = vec.begin(); iter < vec.end(); iter++) {
		cout << iter->first << " " << iter->second << "\n";
	}


}
