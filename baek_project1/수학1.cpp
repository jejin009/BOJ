#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, n, temp = 4;
	int i = 0;
	cin >> n;

	a = n / 5 +1;
	while (a&&temp>3) {
		a--;
		temp = n - a * 5;
		b = temp / 3;
		temp = temp - 3 * b;
	}

	if (a != 0 && temp < 3) {

	}

	if (a != 0 || n - (n / 3) * 3 == 0) cout << a + b;
	else cout << -1;
	
	return 0;
}