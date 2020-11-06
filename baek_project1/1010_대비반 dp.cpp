#include<vector>
#include<iostream>

using namespace std;

int main() {
	int test_case;
	vector<int> answer;

	cin >> test_case;

	for (int t = 0; t < test_case; t++) {
		int n, m;
		cin >> n >> m;
		int arr[31][31];

		for (int i = 0; i < m+1; i++) {
			arr[0][i] = i;
			arr[1][i] = i;
			arr[i][i] = 1;
		}
		
		for (int i = 2; i < n+1; i++) {
			for (int j = i+1; j < m+1; j++) {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}

		answer.push_back(arr[n][m]);
	}

	for (int t = 0; t < test_case; t++) {
		cout << answer[t] << "\n"; 
	}

	return 0;
}