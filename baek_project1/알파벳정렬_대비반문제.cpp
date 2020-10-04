#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

bool myPairCMP();
using namespace std;

int main() {
	int N;
	string temp;
	vector<pair<string,int>> vec;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		vec.push_back(make_pair(temp, temp.length));
	}
	sort(vec.begin(), vec.end(), myPairCMP);

	for (int i = 0; i < N; i++) {
		cout << vec[i].first << endl;
	}
}

bool myPairCMP() {
	return true;
}