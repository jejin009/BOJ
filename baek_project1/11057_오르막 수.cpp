#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	int dp[1001][10];

	cin >> n;

	for (int i = 0; i < 10; i++) {
		dp[1][i] = 10-i;
	}
	for (int i = 2; i < n + 1; i++) {
		dp[i][9] = 1;
		for (int j = 8; j >= 0; j--) {
			dp[i][j] = (dp[i][j + 1] + dp[i - 1][j])%10007; 
		}
	}
	int answer = dp[n][0] % 10007;

	cout << answer << "\n";
	return 0;
}