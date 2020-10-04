#include <iostream>
#include <algorithm>
using namespace std;

#include<iostream>
using namespace std;
int main() {
	int sugar, m, mod, result;
	cin >> sugar;
	m = sugar / 5; 
	while (m >= 0) {
		mod = 0;
		result = 0;
		if (m > 0)
		{
			mod = sugar - 5 * m; 
			result = m;
		}
		else
			mod = sugar;

		result += mod / 3; 
		mod = mod % 3; 

		if (mod == 0)
		{
			cout << result;
			break;
		}
		m--;
	}
	if (mod != 0)
		cout << -1;
}