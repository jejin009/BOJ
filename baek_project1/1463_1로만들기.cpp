#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x, i;
	vector<int> minCount;

	cin >> x;

	minCount.resize(x + 1);
	minCount[0] = 0;
	minCount[1] = 0;

	for (i = 2; i <= x; i++) {
		minCount[i] = minCount[i-1] + 1;
		if (i % 2 == 0 && minCount[i / 2] + 1 < minCount[i])
			minCount[i] = minCount[i / 2] + 1;
		if (i % 3 == 0 && minCount[i / 3] + 1 < minCount[i])
			minCount[i] = minCount[i / 3] + 1;
	}

	cout << minCount[x] << endl;

	return 0;
}