#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x, i;
	vector<int> minCount;

	cin >> x;

	minCount.resize(x + 1);
	minCount[0] = 1;
	minCount[1] = 1;

	for (i = 2; i <= x; i++) {
		minCount[i] = (minCount[i - 1] + minCount[i-2])%10007;
	}

	cout << minCount[x]%10007 << endl;

	return 0;
}